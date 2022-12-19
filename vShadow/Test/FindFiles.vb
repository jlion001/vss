Option Explicit On

Imports System.Runtime.InteropServices

Public Class FindFiles


    Private Declare Function FindFirstFile Lib "kernel32.dll" Alias "FindFirstFileA" ( _
                            ByVal lpszSearchFile As String, _
                            <[In](), Out()> ByVal lpFindFileData As FileInfo.WIN32_FIND_DATA) As IntPtr

    Private Declare Function FindNextFile Lib "kernel32.dll" Alias "FindNextFileA" ( _
                            ByVal hFind As IntPtr, _
                            <[In](), Out()> ByVal lpvFindData As FileInfo.WIN32_FIND_DATA) As <MarshalAs(UnmanagedType.Bool)> Boolean

    Private Declare Function _CopyFile Lib "kernel32.dll" Alias "CopyFileA" ( _
                        ByVal lpExistingFileName As String, _
                        ByVal lpNewFileName As String, _
                        ByVal bFailIfExists As Byte) As Long

    Private Declare Function FindClose Lib "kernel32.dll" Alias "FindClose" ( _
                    ByVal hFind As IntPtr) As <MarshalAs(UnmanagedType.Bool)> Boolean

End Class
