Option Explicit On

Imports System.Runtime.InteropServices
Imports System.Xml

Namespace file
    Public Class FileManagement
        'By Joe Lynds, 2008
        'http://www.jlion.com

#Region "FindFile APIs"
        Private Const INVALID_HANDLE_VALUE As Long = -1

        ''' <summary>
        ''' FindFirstFile API. Necessary because system.io functions can't access shadow volume.
        ''' http://msdn2.microsoft.com/en-us/library/aa364418.aspx
        ''' </summary>
        ''' <param name="lpszSearchFile"></param>
        ''' <param name="lpFindFileData"></param>
        ''' <returns></returns>
        ''' <remarks></remarks>
        <DllImport( _
            "kernel32.dll", _
            CharSet:=CharSet.Ansi, _
            SetLastError:=True)> _
            Private Shared Function FindFirstFile( _
                        <[In]()> ByVal lpszSearchFile As String, _
                        <[In](), Out()> ByVal lpFindFileData As FileInfo.WIN32_FIND_DATA) _
               As IntPtr
        End Function

        ''' <summary>
        ''' FindNextFile API. Necessary because system.io functions can't access shadow volume.
        ''' http://msdn2.microsoft.com/en-us/library/aa364428.aspx
        ''' </summary>
        ''' <param name="hFind"></param>
        ''' <param name="lpFindFileData"></param>
        ''' <returns></returns>
        ''' <remarks></remarks>
        <DllImport( _
            "kernel32.dll", _
            CharSet:=CharSet.Ansi, _
            SetLastError:=True)> _
            Private Shared Function FindNextFile( _
                    <[In]()> ByVal hFind As IntPtr, _
                    <[In](), Out()> ByVal lpFindFileData As FileInfo.WIN32_FIND_DATA) _
           As <MarshalAs(UnmanagedType.Bool)> Boolean
        End Function

        ''' <summary>
        ''' FindClose API. Necessary because system.io functions can't access shadow volume.
        ''' http://msdn2.microsoft.com/en-us/library/aa364413.aspx
        ''' </summary>
        ''' <param name="hFind"></param>
        ''' <returns></returns>
        ''' <remarks></remarks>
        <DllImport( _
            "kernel32.dll", _
            CharSet:=CharSet.Ansi, _
            SetLastError:=True)> _
            Private Shared Function FindClose( _
                    <[In]()> ByVal hFind As IntPtr) _
               As <MarshalAs(UnmanagedType.Bool)> Boolean
        End Function
#End Region

#Region "CopyFile APIs"
        Public Event FileCopyProgress(ByVal lTotalSize As Long, ByVal lTotalTransferred As Long)
        Public Event FileCopyComplete(ByVal sSourceFile As String, ByVal sTargetFile As String)

        ''' <summary>
        ''' Copy File API. Necessary because system.io functions can't access shadow volume.
        ''' http://msdn2.microsoft.com/en-us/library/aa363851.aspx
        ''' </summary>
        ''' <param name="lpExistingFileName"></param>
        ''' <param name="lpNewFileName"></param>
        ''' <param name="bFailIfExists"></param>
        ''' <returns></returns>
        ''' <remarks></remarks>
        <DllImport( _
            "kernel32.dll", _
            CharSet:=CharSet.Auto, _
            SetLastError:=True)> _
            Private Shared Function CopyFile( _
            <[In]()> ByVal lpExistingFileName As String, _
            <[In]()> ByVal lpNewFileName As String, _
            <[In]()> ByVal bFailIfExists As Byte) _
                           As Boolean

        End Function

        Private Enum CopyProgressResult As UInteger
            PROGRESS_CONTINUE = 0
            PROGRESS_CANCEL = 1
            PROGRESS_STOP = 2
            PROGRESS_QUIET = 3
        End Enum

        Private Enum CopyProgressCallbackReason As UInteger
            CALLBACK_CHUNK_FINISHED = 0
            CALLBACK_STREAM_SWITCH = 1
        End Enum

        Private Enum CopyFileFlags As UInteger
            COPY_FILE_FAIL_IF_EXISTS = 1
            COPY_FILE_RESTARTABLE = 2
            COPY_FILE_OPEN_SOURCE_FOR_WRITE = 4
            COPY_FILE_ALLOW_DECRYPTED_DESTINATION = 8
        End Enum

        Public Delegate Function CopyProgressRoutine( _
                    ByVal TotalFileSize As Int64, _
                    ByVal TotalBytesTransferred As Int64, _
                    ByVal StreamSize As Int64, _
                    ByVal StreamBytesTransferred As Int64, _
                    ByVal dwStreamNumber As Int32, _
                    ByVal dwCallbackReason As Int32, _
                    ByVal hSourceFile As Int32, _
                    ByVal hDestinationFile As Int32, _
                    ByVal lpData As Int32 _
        ) As Int32

        Declare Auto Function CopyFileEx Lib "kernel32.dll" ( _
                    ByVal lpExistingFileName As String, _
                    ByVal lpNewFileName As String, _
                    ByVal lpProgressRoutine As CopyProgressRoutine, _
                    ByVal lpData As Int32, _
                    ByVal lpBool As Int32, _
                    ByVal dwCopyFlags As Int32 _
        ) As Int32

        Public Function myCopyProgressRoutine( _
                    ByVal TotalFileSize As Int64, _
                    ByVal TotalBytesTransfered As Int64, _
                    ByVal StreamSize As Int64, _
                    ByVal StreamBytesTransferred As Int64, _
                    ByVal dwStreamNumber As Int32, _
                    ByVal dqCallbackReason As Int32, _
                    ByVal hSourceFile As Int32, _
                    ByVal hDestinationFile As Int32, _
                    ByVal lpData As Int32 _
                    ) As Integer

            RaiseEvent FileCopyProgress(TotalFileSize, TotalBytesTransfered)
        End Function

        Public Function CopyFileWithProgress( _
                            ByVal sSource As String, _
                            ByVal sTarget As String, _
                            ByVal bFailIfExists As Boolean) As Boolean

            Dim dwFlags As Int32 = 0
            If bFailIfExists = True Then
                dwFlags = CopyFileFlags.COPY_FILE_FAIL_IF_EXISTS
            End If

            Dim cb As CopyProgressRoutine
            cb = AddressOf Me.myCopyProgressRoutine

            Dim iRet As Integer = CopyFileEx(lpExistingFileName:=sSource, lpNewFileName:=sTarget, lpProgressRoutine:=cb, lpData:=0, lpBool:=0, dwCopyFlags:=dwFlags)

            RaiseEvent FileCopyComplete(sSource, sTarget)

            If iRet = 0 Then
                '---function failed
                Return False
            Else
                Return True
            End If
        End Function
#End Region

        Public Sub RecursiveCopy( _
                ByVal sSourcePath As String, _
                ByVal sTargetPath As String, _
                ByVal sExt As String)

            If Not sSourcePath.EndsWith("\") Then sSourcePath = sSourcePath & "\"
            If Not sTargetPath.EndsWith("\") Then sTargetPath = sTargetPath & "\"

            Console.Write(sSourcePath)

            '---Get a list of subdirectories
            Dim oDirList As ArrayList = FindAllDirectories(sSourcePath & "*.*")

            '---Create each subdirectory in target path if it doesn't already exist.
            For Each sDirName As String In oDirList
                If Not System.IO.Directory.Exists(sTargetPath & sDirName) Then
                    System.IO.Directory.CreateDirectory(sTargetPath & sDirName)
                End If
            Next

            '---Get a list of files
            Dim oFileList As ArrayList = FindAllFiles(sSourcePath, "*.*")

            For Each sFile As String In oFileList
                Console.Write(".")
                CopySpecificFile(sSourcePath & sFile, sTargetPath & sFile)
            Next

            Console.WriteLine()

            '---Recurse subdirectories
            For Each sDirName As String In oDirList
                RecursiveCopy(sSourcePath & sDirName, sTargetPath & sDirName, sExt)
            Next
        End Sub

        Public Function FindAllFiles( _
                ByVal sPath As String, _
                ByVal sExt As String) As ArrayList

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            Dim sSearchPath As String = sPath
            If sSearchPath.EndsWith("\") Then
                sSearchPath = sSearchPath & sExt
            Else
                sSearchPath = sSearchPath & "\" & sExt
            End If

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sSearchPath, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then

                'must have at least one, so ...
                Do
                    If (wfd.dwFileAttributes And IO.FileAttributes.Directory) = 0 Then
                        Dim oWFD As New FileInfo.WIN32_FIND_DATA
                        CopyStructure(From:=wfd, To:=oWFD)
                        oList.Add(oWFD)
                    End If
                Loop Until FindNextFile(hFile, wfd) = 0

            End If

            'Close the search handle
            Call FindClose(hFile)

            Return oList
        End Function

        Public Function FindAllDirectories( _
            ByVal sPath As String) As ArrayList

            Dim sSearchPath As String = sPath
            If sSearchPath.EndsWith("\") Then
                sSearchPath = sSearchPath & "*.*"
            Else
                sSearchPath = sSearchPath & "\*.*"
            End If

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sSearchPath, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then

                'must have at least one, so ...
                Do
                    If (wfd.dwFileAttributes And IO.FileAttributes.Directory) > 0 _
                        AndAlso wfd.cFileName <> "." _
                        AndAlso wfd.cFileName <> ".." Then

                        Dim oWFD As New FileInfo.WIN32_FIND_DATA
                        CopyStructure(From:=wfd, To:=oWFD)
                        oList.Add(oWFD)
                    End If
                Loop Until FindNextFile(hFile, wfd) = 0

            End If

            'Close the search handle
            Call FindClose(hFile)

            Return oList
        End Function

        Private Sub CopyStructure( _
                        ByVal [From] As FileInfo.WIN32_FIND_DATA, _
                        ByRef [To] As FileInfo.WIN32_FIND_DATA)

            With [To]
                .cAlternate = [From].cAlternate
                .cFileName = [From].cFileName
                .dwFileAttributes = [From].dwFileAttributes
                .dwReserved0 = [From].dwReserved0
                .dwReserved1 = [From].dwReserved1
                .ftCreationTime = [From].ftCreationTime
                .ftLastAccessTime = [From].ftLastAccessTime
                .ftLastWriteTime = [From].ftLastWriteTime
                .nFileSizeHigh = [From].nFileSizeHigh
                .nFileSizeLow = [From].nFileSizeLow
            End With
        End Sub

        Public Sub CopySpecificFile(ByVal sSource As String, ByVal sTarget As String)
            Dim bsuccess As Boolean = CopyFileWithProgress(sSource, sTarget, bFailIfExists:=False)
            'Dim bSuccess As Boolean = CopyFile(sSource, sTarget, 0)

            If Not bSuccess Then
                Dim iErr As Integer = Err.LastDllError
                Dim sError As String = New System.ComponentModel.Win32Exception(iErr).Message

                Throw New util.FileCopyException("Unable to copy file " & sSource & ". Error Text: " & sError)
            End If
        End Sub

        Public Function FileExists(ByVal sFullName As String) As Boolean
            Dim bFileFound As Boolean = False

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sFullName, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then
                bFileFound = True
            End If

            'Close the search handle
            Call FindClose(hFile)

            Return bFileFound
        End Function

        Public Function GetDirectoryInfo( _
                            ByVal sDirName As String, _
                            ByRef oDirInfo As FileInfo.WIN32_FIND_DATA) As Boolean

            Dim bFileFound As Boolean = False

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sDirName, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then
                bFileFound = True

                CopyStructure(wfd, oDirInfo)
            End If

            'Close the search handle
            Call FindClose(hFile)

            Return bFileFound
        End Function

        Public Function GetFileInfo( _
                     ByVal sFileName As String, _
                     ByRef oFileInfo As FileInfo.WIN32_FIND_DATA) As Boolean

            Dim bFileFound As Boolean = False

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sFileName, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then
                bFileFound = True

                CopyStructure(wfd, oFileInfo)
            End If

            'Close the search handle
            Call FindClose(hFile)

            Return bFileFound
        End Function

    End Class
End Namespace
