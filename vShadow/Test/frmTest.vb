Imports System.Runtime.InteropServices
Imports System.Threading
Imports System.IO

Public Class frmTest
    Private Sub cmdGo_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cmdGo.Click
        Test()
    End Sub

    Private Sub ThreadedTest()
        Dim oWatch As New Stopwatch

        Dim oSyncThread As New System.Threading.Thread(AddressOf Test)
        oSyncThread.Start()

        Do
            Application.DoEvents()
            Thread.Sleep(500)

            lblStatus.Text = oWatch.ElapsedMilliseconds / 1000 & " seconds elapsed."

        Loop Until oSyncThread.ThreadState = Threading.ThreadState.Stopped _
            OrElse oSyncThread.ThreadState = Threading.ThreadState.Aborted

        oWatch.Stop()
        lblStatus.Text = "Complete"
    End Sub

    Private Sub Test()
        Dim sSourcePath As String = txtSrc.Text
        Dim sTargetPath As String = txtDest.Text

        If Not sSourcePath.EndsWith("\") Then sSourcePath = sSourcePath & "\"
        If Not sTargetPath.EndsWith("\") Then sTargetPath = sTargetPath & "\"

        Dim sVolume As String = sSourcePath.Substring(0, 2)

        Dim sSourceDir As String = sSourcePath.Substring(3, sSourcePath.Length - 3)
        Dim sTargetDir As String = sTargetPath

        Dim oShadow As New vShadowLib.vShadow(txtSrc.Text)
        Dim sShadowPath As String = oShadow.StartSnapShot

        Dim oFM As New FileManagement
        Console.WriteLine()
        oFM.RecursiveCopy(sShadowPath, sTargetDir, "*.*")

        oShadow.Dispose()
    End Sub

    Private Class FileManagement
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
            <[In]()> ByRef bFailIfExists As Byte) _
                           As Long

        End Function

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
                If Not Directory.Exists(sTargetPath & sDirName) Then
                    Directory.CreateDirectory(sTargetPath & sDirName)
                End If
            Next

            '---Get a list of files
            Dim oFileList As ArrayList = FindAllFiles(sSourcePath & sExt)

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
                ByVal sPath As String) As ArrayList

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sPath, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then

                'must have at least one, so ...
                Do
                    If (wfd.dwFileAttributes And IO.FileAttributes.Directory) = 0 Then
                        oList.Add(wfd.cFileName)
                    End If
                Loop Until FindNextFile(hFile, wfd) = 0

            End If

            'Close the search handle
            Call FindClose(hFile)

            Return oList
        End Function

        Public Function FindAllDirectories( _
            ByVal sPath As String) As ArrayList

            Dim wfd As New FileInfo.WIN32_FIND_DATA
            Dim hFile As Long
            Dim oList As New ArrayList

            'Start searching for files in
            'sSource by obtaining a file
            'handle to the first file matching
            'the filespec passed
            hFile = FindFirstFile(sPath, wfd)

            If hFile <> INVALID_HANDLE_VALUE Then

                'must have at least one, so ...
                Do
                    If (wfd.dwFileAttributes And IO.FileAttributes.Directory) > 0 _
                        AndAlso wfd.cFileName <> "." _
                        AndAlso wfd.cFileName <> ".." Then

                        oList.Add(wfd.cFileName)
                    End If
                Loop Until FindNextFile(hFile, wfd) = 0

            End If

            'Close the search handle
            Call FindClose(hFile)

            Return oList
        End Function

        Public Sub CopySpecificFile(ByVal sSource As String, ByVal sTarget As String)
            CopyFile(sSource, sTarget, 0)
        End Sub
    End Class

End Class
