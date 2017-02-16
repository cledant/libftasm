section .text
	global _ft_strcat
	extern _ft_strlen
	extern _ft_memcpy

_ft_strcat:
	push rbp			;Setting ret
	mov rbp, rsp
	push r12			;Save s1 addr
	mov r12, rdi
	push r13			;Save s2 addr
	mov r13, rsi
	mov rdi, rsi		;Get Len s2
	call _ft_strlen
	push r14			;Save Len s2
	mov r14, rax
	mov rdi, r12		;Get Len s1
	call _ft_strlen
	push r15			;Save Len s1
	mov r15, rax
	mov rdi, r12		;Setting memcpy at end s1
	add rdi, rax
	mov rsi, r13
	mov rdx, r14
	call _ft_memcpy
	mov rax, r12		;Setting return value
	add r12, r14		;Setting NULL terminator
	add r12, r15
	mov byte [r12], 0
	pop r15				;Restoring registers
	pop r14
	pop r13
	pop r12
	pop rbp
	ret
