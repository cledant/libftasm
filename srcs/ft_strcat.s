section .text
	global _ft_strcat

_ft_strcat:
	cld
	xor al, al			;Set al at 0
	mov rcx, -1			;Set rcx to max
	mov r8, rdi			;Saving s1 addr
	mov rdx, -2			;Set rdx to max and sub 1
	repne scasb			;Seeking length with NULL terminated char
	sub rdx, rcx	
	add rdi, rdx		;Set where to write
	jmp _loop

_loop:
	cmp byte [rsi], 0
	je _ret
	mov [rdi], [rsi]
	inc rsi
	inc rdi
	jmp _loop

_ret:
	mov byte [rdi], 0	;Writting NULL terminator
	mov rax, r8			;Set return value
	ret
