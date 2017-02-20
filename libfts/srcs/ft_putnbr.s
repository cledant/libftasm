%define		MACH_SYSCALL(nb)		0x2000000 | nb
%define		STDOUT					1
%define		WRITE					4

section .data
char:
	.string db "-", 10

section .text
	global _ft_putnbr

_ft_putnbr:
	push rbp							;Set ret
	mov rbp, rsp
	push r12							;Save n in r12
	xor r12, r12
	mov r12d, edi
	cmp edi, 0							;Case for negative number
	jl _neg
	jmp	_loop

_neg:
	mov rax, MACH_SYSCALL(WRITE)
	mov rdi, STDOUT
	lea rsi, [rel char.string]
	mov rdx, 1
	syscall
	neg r12d
	jmp _loop

_loop:
	mov rdx, 0							;Set division param
	mov rax, r12
	mov r8, 10
	idiv r8
	push r13							;Save division result in r13
	mov r13, rdx
	cmp rax, 0							;Display or recursive ft_putnbr call
	jg _set_call
	jmp _display

_display:
	add r13, '0'
	mov [rel char.string], r13			;Set param for WRITE syscall
	lea rsi, [rel char.string]
	mov rax, MACH_SYSCALL(WRITE)
	mov rdi, STDOUT
	mov rdx, 1
	syscall
	pop r13								;Restore variable
	pop r12
	pop rbp
	ret

_set_call:
	mov rdi, rax						;Set parameter for ft_putnbr call
	call _ft_putnbr
	jmp _display
