section .text
	global _ft_strcmp

_ft_strcmp:
	xor rax, rax					;Init rax to 0
	jmp _loop

_loop:
	movzx rax, byte [rdi]			;Compare s1 and s2
	movzx r8, byte [rsi]
	sub rax, r8
	cmp rax, 0						;Exit if != 0
	jne _exit
	cmp byte [rdi], 0				;Exit if s1 = NULL terminator
	je _exit
	cmp byte [rsi], 0				;Exit if s2 = NULL terminator
	je _exit
	inc rdi							;Loop
	inc rsi
	jmp _loop

_exit:
	ret
