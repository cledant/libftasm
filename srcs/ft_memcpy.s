section .text
	global _ft_memcpy

_ft_memcpy:
	mov rax, rdi
	cmp rsi, 0
	jnz _set
	ret

_set:
	cld					;Reset direction flag
	mov rcx, rdx		;Setting counter for rep
	rep movsb
	ret
