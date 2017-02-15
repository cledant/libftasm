section .text
	global _ft_bzero

_ft_bzero:
	cmp rsi, 0
	jnz _set
	ret

_set:
	xor al, al			;Setting value copied by stosb
	mov rcx, rsi		;Setting counter for rep
	rep stosb
	ret
