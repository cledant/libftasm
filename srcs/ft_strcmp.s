section .text
	global _ft_strcmp

_ft_strcmp:
	cld
	xor rax, rax
	jmp _loop

_loop:
	movzx rax, byte [rdi]
	movzx r8, byte [rsi]
	sub rax, r8
	cmp rax, 0
	jne _exit
	cmp byte [rdi], 0
	je _exit
	cmp byte [rsi], 0
	je _exit
	inc rdi
	inc rsi
	jmp _loop

_exit:
	ret
