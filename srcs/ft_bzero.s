section .text
	global _ft_bzero

_ft_bzero:
	cmp rsi, 0
	jnz _set
	ret

_set:
	xor al, al
	mov rcx, rsi
	rep stosb
	ret
