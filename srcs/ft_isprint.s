section .text
	global _ft_isprint

_ft_isprint:
	xor rax, rax	;Initialize rax to 0
	cmp rdi, ' '
	jl _no
	cmp rdi, '~'
	jg _no
	inc rax
	ret

_no:
	ret
