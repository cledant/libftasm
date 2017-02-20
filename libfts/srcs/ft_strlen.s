section .text
	global _ft_strlen

_ft_strlen:
	cld					;Clear direction flag
	xor al, al			;Initialize al to 0
	mov rcx, -1			;Set rcx at max value
	repne scasb			;Scan rdi for value in al
	mov rax, -2			;Set rax to max value and sub 1
	sub rax, rcx		;Calculate retun value
	ret
