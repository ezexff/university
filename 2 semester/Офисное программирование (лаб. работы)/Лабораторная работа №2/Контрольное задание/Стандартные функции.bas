Attribute VB_Name = " онтрольное«адание"
Sub »нициалы()
Dim x, x1 As String
Dim y, y1 As String
Dim z, z1 As String
x = InputBox("¬вод ‘амилии", "¬ведите фамилию")
x1 = Left$(x, 1)

y = InputBox("¬вод имени", "¬ведите им€")
y1 = Left$(y, 1)

z = InputBox("¬вод отчества", "¬ведите отчество")
z1 = Left$(z, 1)

MsgBox x1 & y1 & z1
End Sub

Sub «амена()
Dim x As String
x = InputBox("¬ведите строку, содержащую 2010 год", "¬вод строки")
MsgBox Replace(x, "2010", "2011")
End Sub


Sub  оличествоћес€цев()
Dim x, x1 As Long
x = InputBox("¬ведите дату", "¬вод даты")
x1 = DateDiff("d", x, Now)
MsgBox "—о введЄнной даты прошло дней: " & x1
End Sub

Sub »нтервалƒат()
MsgBox DateAdd("m", 1, Now)
End Sub
