section .text
	global _ft_isalpha

_ft_isalpha:
	xor rax, rax			;Initialize rax to 0
	cmp rdi, 'A'			;Check if uppercase first
	jl _check_lowercase
	cmp rdi, 'Z'
	jg _check_lowercase
	inc rax
	ret

_check_lowercase:
	cmp rdi, 'a'			;Check if lowercase then return
	jl _no
	cmp rdi, 'z'
	jg _no
	inc rax
	ret

_no:
	ret
