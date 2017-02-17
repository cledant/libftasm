section .text
	global _ft_strnew
	extern _malloc
	extern _ft_bzero

_ft_strnew:
	inc rdi						;Adding NULL terminator
	push r12					;Save size +1 in r12
	mov r12, rdi
	call _malloc				;Calling malloc
	cmp rax, 0					;Case if malloc failed
	je _exit
	push r13					;Save str addr in r13
	mov r13, rax
	mov rdi, rax				;Setting call to ft_bzero
	mov rsi, r12
	call _ft_bzero
	mov rax, r13				;Setting return value
	pop r13						;Restore values
	pop r12
	ret

_exit:
	pop r12
	ret
