Attribute VB_Name = "������������������"
Sub ��������()
Dim x, x1 As String
Dim y, y1 As String
Dim z, z1 As String
x = InputBox("���� �������", "������� �������")
x1 = Left$(x, 1)

y = InputBox("���� �����", "������� ���")
y1 = Left$(y, 1)

z = InputBox("���� ��������", "������� ��������")
z1 = Left$(z, 1)

MsgBox x1 & y1 & z1
End Sub

Sub ������()
Dim x As String
x = InputBox("������� ������, ���������� 2010 ���", "���� ������")
MsgBox Replace(x, "2010", "2011")
End Sub


Sub �����������������()
Dim x, x1 As Long
x = InputBox("������� ����", "���� ����")
x1 = DateDiff("d", x, Now)
MsgBox "�� �������� ���� ������ ����: " & x1
End Sub

Sub �����������()
MsgBox DateAdd("m", 1, Now)
End Sub
