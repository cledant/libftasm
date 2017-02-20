section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy

_ft_strdup:
	push rbp			;Setting ret
	mov rbp, rsp
	push r12			;r12 for string addr
	mov r12, rdi
	call _ft_strlen
	push r13			;r13 for string len
	mov r13, rax
	mov rdi, rax		;Setting call to malloc
	inc rdi
	call _malloc
	cmp rax, 0			;Check if malloc failed
	je _ret
	mov rdi, rax		;Setting call to ft_memcpy
	mov rsi, r12
	mov rdx, r13
	call _ft_memcpy
	mov rdi, rax		;Adding NULL terminator
	add rdi, r13
	mov byte [rdi], 0
	jmp _ret

_ret:
	pop r13
	pop r12
	pop rbp
	ret
