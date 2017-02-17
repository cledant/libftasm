section .text
	global _ft_strcmp

_ft_strcmp:
	cld
	mov rcx, -1
	repnz cmpsb						;Compare s1 and s2
	mov r8, [rdi]
	mov r9, [rsi]
	sub r8, r9
	xor rax, rax
	mov rax, r8
	ret
