DATA SEGMENT			; ������� ������
; ����������� ������ ������� ��������������
        A DQ 1.0
        B DQ 1.8
        X DQ 1.0
; ����������� ������������� �����
        n2 DD 1.0
        n3 DD 2.0
        n4 DD -2.0
        n5 DD 0.5 
; ����������� ������� �������� ������� Sin
        ;Sin DQ 0.866025403784438646763723170752936
         ;   DQ 0.991444861373810411144557526928563
          ;  DQ 0.707106781186547524400844362104849
DATA ENDS
   CODE SEGMENT			; ������� ������
        ASSUME CS:CODE, DS:DATA, SS:STAC 
.386                     
Start:  MOV AX, DATA	; ��������� DS
        MOV DS, AX 		; �� ������� ������
        FINIT				; ������������� ������������
        fld x
        fld x
        fmul
        fxch st(0) 
        fsub n2
        fxch st(1)
        fld n3 
        fmul st(1), st(0)
        fldl2e
        fmul st(1), st(0)
        f2xm1
        fmul st(1), st(0)
        fld n2
        fadd st(1), st(0)
        fld n4
        fadd st(0), st(1)
        fdiv st(0), st(1)
        fxch st(1)
        fld n5
        fsub st(0), st(1)		
        MOV AX, 4C00H		; ������� ���������� ���������
        INT 21H			; ����� DOS
CODE ENDS

STAC SEGMENT PARA STACK	; ������� �����
        DB 128 DUP (?)			; ������� ������ ��� ����
STAC ENDS
     END Start			; ����� �����
