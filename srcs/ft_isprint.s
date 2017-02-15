section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, ' '
	jl _no
	cmp rdi, '~'
	jg _no
	mov rax, 1
	ret

_no:
	mov rax, 0
	ret
