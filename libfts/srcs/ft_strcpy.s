section .text
	global _ft_strcpy

_ft_strcpy:
	cld					;Clear direction flag
	mov r8, rdi 		;Save s1 addr in r8
	xor al, al			;Init al to 0
	mov rcx, -1			;Get and save s2 len in r11
	mov rdi, rsi
	repne scasb
	mov r11, -2
	sub r11, rcx
	cmp r11, 0			;Exit if s2 size is 0
	je _exit
	mov rdi, r8			;Doing copy beginning of s1
	mov rcx, r11
	rep movsb
	mov byte [rdi], 0	;Adding NULL terminator
	mov rax, r8			;Set return value
	ret

_exit:
	mov rax, r8			;Set return value
	mov byte [rax], 0	;Adding NULL terminator
	ret
