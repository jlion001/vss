Namespace util
    'By Joe Lynds, 2008
    'http://www.jlion.com

    Public Class FileCopyException
        Inherits ApplicationException

        Public Sub New()
        End Sub 'New

        Public Sub New(ByVal message As String)
            MyBase.New(message)
        End Sub 'New

        Public Sub New(ByVal message As String, ByVal inner As Exception)
            MyBase.New(message, inner)
        End Sub 'New
    End Class
End Namespace
