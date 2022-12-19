Option Explicit On

Imports System.Runtime.InteropServices

''' <summary>
''' Encapsulates information about a file, on either a remote or local location.
''' </summary>
''' <remarks></remarks>
Public Class FileInfo
    Private msName As String
    Private mbIsDirectory As Boolean
    Private mbIsReadonly As Boolean
    Private moLastWriteTime As Object
    Private mlFileSize As Int64

    <DllImport( _
       "kernel32.dll", _
       CharSet:=CharSet.Auto, _
       SetLastError:=True)> _
    Private Shared Function FileTimeToSystemTime( _
                        <[In]()> ByVal lpFileTime As FILETIME, _
                        <Out()> ByRef lpSystemTime As SYSTEMTIME) _
               As Boolean

    End Function

    Public Const FILE_ATTRIBUTE_READONLY = &H1
    Public Const FILE_ATTRIBUTE_HIDDEN = &H2
    Public Const FILE_ATTRIBUTE_SYSTEM = &H4
    Public Const FILE_ATTRIBUTE_DIRECTORY = &H10
    Public Const FILE_ATTRIBUTE_ARCHIVE = &H20
    Public Const FILE_ATTRIBUTE_NORMAL = &H80
    Public Const FILE_ATTRIBUTE_TEMPORARY = &H100
    Public Const FILE_ATTRIBUTE_COMPRESSED = &H800
    Public Const FILE_ATTRIBUTE_OFFLINE = &H1000

    ''' <summary>
    ''' Structure used by windows to store security attributes
    ''' </summary>
    ''' <remarks></remarks>
    <StructLayout(LayoutKind.Sequential, CharSet:=CharSet.Ansi)> _
    Public Class SECURITY_ATTRIBUTES
        Public nLength As Long
        Public lpSecurityDescriptor As Long
        Public bInheritHandle As Long
    End Class

    ''' <summary>
    ''' Structure used by windows to store file times. Referenced by WIN32_FIND_DATA structure
    ''' </summary>
    ''' <remarks></remarks>
    <StructLayout(LayoutKind.Sequential, CharSet:=CharSet.Ansi)> _
    Public Class FILETIME
        Public dwHighDateTime As Int32
        Public dwLowDateTime As Int32
    End Class

    ''' <summary>
    ''' Information about a remote file, returned by the FTPFindFirstFile and InternetFindNextFile API calls.
    ''' </summary>
    ''' <remarks></remarks>
    <Serializable(), StructLayout(LayoutKind.Sequential, CharSet:=CharSet.Ansi)> _
    Public Class WIN32_FIND_DATA
        Public dwFileAttributes As System.IO.FileAttributes
        Public ftCreationTime As FILETIME
        Public ftLastAccessTime As FILETIME
        Public ftLastWriteTime As FILETIME
        Public nFileSizeHigh As Integer
        Public nFileSizeLow As Integer
        Public dwReserved0 As Integer
        Public dwReserved1 As Integer
        <MarshalAs(UnmanagedType.ByValTStr, SizeConst:=256)> _
        Public cFileName As String
        <MarshalAs(UnmanagedType.ByValTStr, SizeConst:=14)> _
        Public cAlternate As String
    End Class

    <StructLayout(LayoutKind.Sequential)> _
    Private Structure SYSTEMTIME
        <MarshalAs(UnmanagedType.U2)> Public Year As Short
        <MarshalAs(UnmanagedType.U2)> Public Month As Short
        <MarshalAs(UnmanagedType.U2)> Public DayOfWeek As Short
        <MarshalAs(UnmanagedType.U2)> Public Day As Short
        <MarshalAs(UnmanagedType.U2)> Public Hour As Short
        <MarshalAs(UnmanagedType.U2)> Public Minute As Short
        <MarshalAs(UnmanagedType.U2)> Public Second As Short
        <MarshalAs(UnmanagedType.U2)> Public Milliseconds As Short
    End Structure

    Public Sub New(ByVal oFile As WIN32_FIND_DATA)
        msName = oFile.cFileName
        mbIsDirectory = oFile.dwFileAttributes And FileInfo.FILE_ATTRIBUTE_DIRECTORY
        mbIsReadonly = oFile.dwFileAttributes And FileInfo.FILE_ATTRIBUTE_READONLY
        mlFileSize = CalculateFileSize(oFile.nFileSizeHigh, oFile.nFileSizeLow)
        moLastWriteTime = CalculateFileTime(oFile.ftLastWriteTime)
    End Sub

    Public Sub New(ByVal oFile As System.IO.FileInfo)
        msName = oFile.Name
        mbIsDirectory = False
        mbIsReadonly = oFile.IsReadOnly
        mlFileSize = oFile.Length
        moLastWriteTime = oFile.LastWriteTime
    End Sub

    Public Sub New(ByVal oFile As System.IO.DirectoryInfo)
        msName = oFile.Name
        mbIsDirectory = True
        mbIsReadonly = False
        mlFileSize = 0
        moLastWriteTime = oFile.LastWriteTime
    End Sub

    Public ReadOnly Property Name() As String
        Get
            Return msName
        End Get
    End Property

    Public ReadOnly Property IsDirectory() As Boolean
        Get
            Return mbIsDirectory
        End Get
    End Property

    Public ReadOnly Property IsReadonly() As Boolean
        Get
            Return mbIsReadonly
        End Get
    End Property

    Public ReadOnly Property FileSize() As Int64
        Get
            Return mlFileSize
        End Get
    End Property

    Public ReadOnly Property LastWriteTime() As Object
        Get
            Return moLastWriteTime
        End Get
    End Property

    Private Function CalculateFileSize(ByVal lFileSizeHigh As Long, ByVal lFileSizeLow As Long) As Int64
        Dim lFileSize64 As Int64 = lFileSizeLow

        If lFileSizeLow < 0 Then
            lFileSize64 = lFileSize64 + 4294967296@
        End If

        If lFileSizeLow > 0 Then
            lFileSize64 = lFileSize64 + (lFileSizeHigh * 4294967296@)
        End If

        Return lFileSize64
    End Function

    Private Function CalculateFileTime(ByVal oFileTime As FILETIME) As Object
        Dim oSystemTime As New SYSTEMTIME

        Dim bSuccess As Boolean = FileTimeToSystemTime(oFileTime, oSystemTime)

        If bSuccess = True Then
            Dim oTime As New DateTime( _
                                oSystemTime.Year, _
                                oSystemTime.Month, _
                                oSystemTime.Day, _
                                oSystemTime.Hour, _
                                oSystemTime.Minute, _
                                oSystemTime.Second, _
                                oSystemTime.Milliseconds)

            Return oTime
        Else
            Return Nothing
        End If
    End Function

End Class
