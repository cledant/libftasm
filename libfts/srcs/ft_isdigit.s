section .text
	global _ft_isdigit

_ft_isdigit:
	xor rax, rax		;Initialize rax to 0
	cmp rdi, '0'
	jl _no
	cmp rdi, '9'
	jg _no
	inc rax
	ret

_no:
	ret
