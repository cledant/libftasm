section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, '0'
	jl _no
	cmp rdi, '9'
	jg _no
	mov rax, 1
	ret

_no:
	mov rax, 0
	ret
