%define MAX_64BIT 0xFFFFFFFFFFFFFFFF

section .text
	global _ft_strlen

_ft_strlen:
	cld					;Clear direction flag
	xor al, al			;Initialize al to 0
	or rcx, MAX_64BIT	;Set rcx at MAX_64BIT value
	repne scasb			;Scan rdi for value in al
	or rax, MAX_64BIT	;Set rac to MAX_64BIT value
	sub rax, rcx		;Calculate retun value
	sub rax, 1			;Scasb did at least 1 loop
	ret
