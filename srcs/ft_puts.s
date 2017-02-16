%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

section .rodata
text_null:
	.string db "(null)", 10
	.len equ $ - text_null.string
new_line:
	.string db "", 10
	.len equ $ - new_line.string


section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp							;Set ret
	mov rbp, rsp
	cmp rdi, 0							;Case for s = NULL
	je _disp_null
	push r12							;Save s addr in r12
	mov r12, rdi
	call _ft_strlen						;Getting s len
	mov rsi, r12						;Setting call to write string
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0							;Checking if write failed
	jl _fail
	lea rsi, [rel new_line.string]		;Setting call to write new_line
	mov rdi, STDOUT
	mov rdx, new_line.len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0							;Checking if write failed
	jl _fail
	mov rax, 10
	pop r12								;Restoring values
	pop rbp
	ret

_fail:
	pop r12								;Restoring values
	pop rbp
	ret

_disp_null:
	lea rsi, [rel text_null.string]		;Setting call to write
	mov rdi, STDOUT
	mov rdx, text_null.len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0							;Checking if write failed
	jl _fail_null
	mov rax, 10
	pop rbp								;Restoring values
	ret

_fail_null:
	pop rbp								;Restoring values
	ret
