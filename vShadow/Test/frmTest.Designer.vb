<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmTest
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.cmdGo = New System.Windows.Forms.Button
        Me.Label1 = New System.Windows.Forms.Label
        Me.Label2 = New System.Windows.Forms.Label
        Me.Label3 = New System.Windows.Forms.Label
        Me.txtSrc = New System.Windows.Forms.TextBox
        Me.txtDest = New System.Windows.Forms.TextBox
        Me.txtExt = New System.Windows.Forms.TextBox
        Me.lblStatus = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'cmdGo
        '
        Me.cmdGo.Location = New System.Drawing.Point(207, 90)
        Me.cmdGo.Name = "cmdGo"
        Me.cmdGo.Size = New System.Drawing.Size(75, 23)
        Me.cmdGo.TabIndex = 0
        Me.cmdGo.Text = "Go"
        Me.cmdGo.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(16, 13)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(26, 13)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "Src:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(16, 42)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(32, 13)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Dest:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(16, 70)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(25, 13)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = "Ext:"
        '
        'txtSrc
        '
        Me.txtSrc.Location = New System.Drawing.Point(55, 13)
        Me.txtSrc.Name = "txtSrc"
        Me.txtSrc.Size = New System.Drawing.Size(227, 20)
        Me.txtSrc.TabIndex = 4
        Me.txtSrc.Text = "c:\test\"
        '
        'txtDest
        '
        Me.txtDest.Location = New System.Drawing.Point(54, 39)
        Me.txtDest.Name = "txtDest"
        Me.txtDest.Size = New System.Drawing.Size(227, 20)
        Me.txtDest.TabIndex = 5
        Me.txtDest.Text = "e:\test\"
        '
        'txtExt
        '
        Me.txtExt.Location = New System.Drawing.Point(54, 67)
        Me.txtExt.Name = "txtExt"
        Me.txtExt.Size = New System.Drawing.Size(66, 20)
        Me.txtExt.TabIndex = 6
        Me.txtExt.Text = "*.*"
        '
        'lblStatus
        '
        Me.lblStatus.AutoSize = True
        Me.lblStatus.Location = New System.Drawing.Point(17, 100)
        Me.lblStatus.Name = "lblStatus"
        Me.lblStatus.Size = New System.Drawing.Size(0, 13)
        Me.lblStatus.TabIndex = 7
        '
        'frmTest
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(294, 125)
        Me.Controls.Add(Me.lblStatus)
        Me.Controls.Add(Me.txtExt)
        Me.Controls.Add(Me.txtDest)
        Me.Controls.Add(Me.txtSrc)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.cmdGo)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.Name = "frmTest"
        Me.Text = "Test"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents cmdGo As System.Windows.Forms.Button
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents txtSrc As System.Windows.Forms.TextBox
    Friend WithEvents txtDest As System.Windows.Forms.TextBox
    Friend WithEvents txtExt As System.Windows.Forms.TextBox
    Friend WithEvents lblStatus As System.Windows.Forms.Label

End Class
