section .text
	global _ft_strcat

_ft_strcat:
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
	mov rcx, -1			;Get and save s1 len in r10
	mov rdi, r8
	repne scasb
	mov r10, -2
	sub r10, rcx
	mov rdi, r8			;Doing copy from end S1
	add rdi, r10
	mov rcx, r11
	rep movsb
	add rdi, r11		;Adding NULL terminator
	mov byte [rdi], 0
	mov rax, r8			;Set return value
	ret

_exit:
	mov rax, r8			;Set return value
	ret
