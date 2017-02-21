%define		MACH_SYSCALL(nb)	0x2000000 | nb
%define		STDIN				0
%define		STDOUT				1
%define		WRITE				4
%define		READ				3
%define		BUFF_SIZE			128
%define		MAX_FD				4864

section .bss
	buff : resb BUFF_SIZE

section .text
	global _ft_cat

_ft_cat:
	cmp rdi, 0						;Check if fd < 0
	jl _errorfd
	cmp rdi, MAX_FD					;Check if fd > nb_fd_max (ulimit -n)
	jg _errorfd
	push rbp						;Setting ret
	mov rbp, rsp
	push r12						;Save fd in r12
	mov r12, rdi
	push r13						;Save read return (in a case) in r13 
	jmp _loop

_loop:
	mov rax, MACH_SYSCALL(READ)		;Setting read syscall
	mov rdi, r12
	lea rsi, [rel buff]
	mov rdx, BUFF_SIZE
	syscall
	cmp rax, 0						;Case if read failed
	jl _exit
	cmp rax, BUFF_SIZE				;Case if finished to read or not
	jl _last_write
	jmp _write

_exit:
	pop r13							;Resetting values
	pop r12
	pop rbp
	ret

_write:
	mov rax, MACH_SYSCALL(WRITE)	;Setting write syscall
	mov rdi, STDOUT
	mov rdx, BUFF_SIZE
	lea rsi, [rel buff]
	syscall
	cmp rax, 0						;Case if write failed
	jl _exit
	jmp _loop						;loop to read

_last_write:
	mov r13, rax
	mov rdx, rax					;Setting write call + moving nb of read char
	mov rax, MACH_SYSCALL(WRITE)
	mov rdi, STDOUT
	lea rsi, [rel buff]
	syscall							;Return in all cases
	cmp rax, 0						;Case if write failed
	jl _exit
	cmp r12, STDIN
	je _stdin_exit_check
	jmp _exit

_stdin_exit_check:
	cmp r13, 0						;Checking if read was empty
	je _exit
	jmp _loop

_errorfd:
	ret
