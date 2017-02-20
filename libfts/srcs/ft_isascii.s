section .text
	global _ft_isascii

_ft_isascii:
	xor rax, rax		;Initialize rax to 0
	cmp rdi, 127
	jg _no
	inc rax
	ret

_no:
	ret
