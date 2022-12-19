Imports System.Runtime.InteropServices
Imports System.Threading
Imports System.IO

Public Class vShadow
    'By Joe Lynds, 2008
    'http://www.jlion.com

    Private moShadowInterface As ISHADOW

    Private moSnapShotSet As New Guid
    Private moSnapShot As New Guid

    Private msLocalPath As String
    Private msShadowPath As String

    Private msVersion As String = New String(" ", 255)

    Private msAPIName As String = ""
    Private msReturnCode As String = ""

    Private Sub InitializeShadowInterface()

        If Not Environment.OSVersion.Platform = PlatformID.Win32NT Then
            Throw New Exception("Volume Shadow Copy not supported on this O/S.")
        Else
            Select Case Environment.OSVersion.Version.Major
                Case 3
                    '---NT 3.51
                    Throw New Exception("Volume Shadow Copy not supported on this O/S.")

                Case 4
                    '---NT 4.0
                    Throw New Exception("Volume Shadow Copy not supported on this O/S.")

                Case 5
                    '---Win2000/XP/2003
                    Select Case Environment.OSVersion.Version.Minor
                        Case 0
                            '---Win2000
                            Throw New Exception("Volume Shadow Copy not supported on this O/S.")

                        Case 1
                            '---WinXP
                            Dim oInfo As New SystemInfo
                            If oInfo.Is64Bit Then
                                '---64-bit
                                moShadowInterface = New VSHADOW_XP64
                            Else
                                '--32-bit
                                moShadowInterface = New VSHADOW_XP32
                            End If

                        Case 2
                            '---Win2003
                            Dim oInfo As New SystemInfo
                            If oInfo.Is64Bit Then
                                '---64-bit
                                moShadowInterface = New VSHADOW_03SVR64

                            Else
                                '--32-bit
                                moShadowInterface = New VSHADOW_03SVR32
                            End If

                    End Select

                Case 6
                    If Environment.OSVersion.Version.Build > 7 Then
                        '---Windows 7
                        Dim oInfo As New SystemInfo
                        If oInfo.Is64Bit Then
                            '---64-bit
                            moShadowInterface = New VSHADOW_WIN764
                        Else
                            '--32-bit
                            moShadowInterface = New VSHADOW_WIN732
                        End If

                    Else
                        '---Vista/Windows Server 2008
                        Dim oInfo As New SystemInfo
                        If oInfo.Is64Bit Then
                            '---64-bit
                            moShadowInterface = New VSHADOW_VISTA64
                        Else
                            '--32-bit
                            moShadowInterface = New VSHADOW_VISTA32
                        End If
                    End If


            End Select
        End If
        Select Case Environment.OSVersion.Platform
            Case PlatformID.Win32NT
        End Select
    End Sub

    Public Sub New()
        Dim lRet As Long

        InitializeShadowInterface()
        lRet = moShadowInterface.Version(msVersion)
    End Sub

    Public Sub New(ByVal sPath As String)
        Dim lRet As Long

        InitializeShadowInterface()
        lRet = moShadowInterface.Version(msVersion)

        msLocalPath = sPath

        Dim iIndex As Integer = sPath.IndexOf("\", 0)
        Dim sVolumeName As String = sPath.Substring(0, iIndex + 1)
        msLocalPath = sPath.Substring(iIndex + 1, sPath.Length - iIndex - 1)

        lRet = moShadowInterface.VSSInitializeForBackup()
        If lRet <> 0 Then
            GetLastStatus()

            If msReturnCode <> "RPC_E_CHANGED_MODE" _
                AndAlso msReturnCode <> "S_FALSE" Then
                Throw New VSSException(LastErrorMessage)
            End If
        End If

        lRet = moShadowInterface.VSSStartSnapshot(sVolumeName, moSnapShotSet, moSnapShot)
        If lRet <> 0 Then
            Throw New VSSException(LastErrorMessage)
        End If
    End Sub

    Public ReadOnly Property Version() As String
        Get
            Return msVersion
        End Get
    End Property

    Protected Sub GetLastStatus()
        GetLastStatus(msAPIName, msReturnCode)
    End Sub

    Public ReadOnly Property LastErrorMessage() As String
        Get
            If msAPIName = "" Then
                GetLastStatus()
            End If

            Return msAPIName & ": " & msReturnCode
        End Get
    End Property

    Public Function StartSnapShot() As String
        Dim sDeviceName As New String(" ", 255)
        Dim lRet As Long = moShadowInterface.VSSGetSnapShotDeviceName(sDeviceName, moSnapShot)
        If lRet <> 0 Then
            Throw New VSSException(LastErrorMessage)
        End If

        Return sDeviceName & "\" & msLocalPath
    End Function

    Public Sub Dispose()
        Dim lRet As Long
        lRet = moShadowInterface.VSSDeleteAllSnapshots(moSnapShotSet)
        If lRet <> 0 Then
            Throw New VSSException(LastErrorMessage)
        End If

        lRet = moShadowInterface.VSSCloseBackup()
        If lRet <> 0 Then
            Throw New VSSException(LastErrorMessage)
        End If
    End Sub

    Public Sub GetLastStatus( _
                    ByRef sAPIName As String, _
                    ByRef sReturnCode As String)

        Dim lRet As Long

        sAPIName = New String(" ", 255)
        sReturnCode = New String(" ", 255)

        lRet = moShadowInterface.VSSGetLastStatus(sAPIName, sReturnCode)
        If lRet <> 0 Then
            Throw New VSSException(LastErrorMessage)
        End If
    End Sub

    Private Interface ISHADOW
        Function Version(ByRef bstrVersion As String) As Integer
        Function VSSInitializeForBackup() As System.UInt32

        Function VSSStartSnapshot( _
                    ByVal pwszVolumeName As String, _
                    ByRef pidSnapShotSet As Guid, _
                    ByRef pidSnapShot As Guid) As System.UInt32

        Function VSSGetSnapShotDeviceName _
                         (ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Function VSSDeleteAllSnapshots _
                     (ByRef pidSnapShotSet As Guid) As System.UInt32

        Function VSSCloseBackup() As System.UInt32

        Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer
    End Interface

    Private Class VSHADOW_XP32
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-xp32.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-xp32.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-xp32.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-xp32.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-xp32.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-xp32.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-xp32.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_XP64
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-xp64.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-xp64.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-xp64.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-xp64.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-xp64.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-xp64.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-xp64.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32


        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_03SVR32
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-03svr32.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-03svr32.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-03svr32.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-03svr32.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-03svr32.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-03svr32.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-03svr32.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_03SVR64
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-03svr64.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-03svr64.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-03svr64.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-03svr64.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-03svr64.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-03svr64.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-03svr64.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_VISTA32
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-Vista32.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-Vista32.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-Vista32.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-Vista32.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-Vista32.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-Vista32.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-Vista32.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_VISTA64
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-Vista64.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-Vista64.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-Vista64.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-Vista64.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-Vista64.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-Vista64.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-Vista64.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_WIN732
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-WIN732.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-WIN732.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-WIN732.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-WIN732.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-WIN732.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-WIN732.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-WIN732.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

    Private Class VSHADOW_WIN764
        Implements ISHADOW

        Private Declare Auto Function _Version Lib "vShadow-WIN764.dll" Alias "Version" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrVersion As String) As System.UInt32

        Private Declare Auto Function _VSSInitializeForBackup Lib "vShadow-WIN764.dll" Alias "VSSInitializeForBackup" () As System.UInt32

        Private Declare Auto Function _VSSStartSnapshot Lib "vShadow-WIN764.dll" Alias "VSSStartSnapshot" _
                        (<MarshalAs(UnmanagedType.LPWStr)> ByVal pwszVolumeName As String, _
                         ByRef pidSnapShotSet As Guid, _
                         ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSGetSnapShotDeviceName Lib "vShadow-WIN764.dll" Alias "VSSGetSnapShotDeviceName" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrDeviceName As String, _
                          ByRef pidSnapShot As Guid) As System.UInt32

        Private Declare Auto Function _VSSDeleteAllSnapshots Lib "vShadow-WIN764.dll" Alias "VSSDeleteAllSnapshots" _
                         (ByRef pidSnapShotSet As Guid) As System.UInt32

        Private Declare Auto Function _VSSCloseBackup Lib "vShadow-WIN764.dll" Alias "VSSCloseBackup" () As System.UInt32

        Private Declare Auto Function _VSSGetLastStatus Lib "vShadow-WIN764.dll" Alias "VSSGetLastStatus" _
                         (<[Out](), MarshalAs(UnmanagedType.BStr)> ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As System.UInt32

        Public Function Version(ByRef bstrVersion As String) As Integer Implements ISHADOW.Version
            Return _Version(bstrVersion)
        End Function

        Public Function VSSCloseBackup() As UInteger Implements ISHADOW.VSSCloseBackup
            Return _VSSCloseBackup
        End Function

        Public Function VSSDeleteAllSnapshots(ByRef pidSnapShotSet As System.Guid) As UInteger Implements ISHADOW.VSSDeleteAllSnapshots
            Return _VSSDeleteAllSnapshots(pidSnapShotSet)
        End Function

        Public Function VSSGetSnapShotDeviceName(ByRef bstrDeviceName As String, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSGetSnapShotDeviceName
            Return _VSSGetSnapShotDeviceName(bstrDeviceName, pidSnapShot)
        End Function

        Public Function VSSInitializeForBackup() As UInteger Implements ISHADOW.VSSInitializeForBackup
            Return _VSSInitializeForBackup
        End Function

        Public Function VSSStartSnapshot(ByVal pwszVolumeName As String, ByRef pidSnapShotSet As System.Guid, ByRef pidSnapShot As System.Guid) As UInteger Implements ISHADOW.VSSStartSnapshot
            Return _VSSStartSnapshot(pwszVolumeName, pidSnapShotSet, pidSnapShot)
        End Function

        Public Function VSSGetLastStatus(ByRef bstrAPIName As String, ByRef bstrReturnCodeName As String) As Integer Implements ISHADOW.VSSGetLastStatus
            Return _VSSGetLastStatus(bstrAPIName, bstrReturnCodeName)
        End Function
    End Class

End Class