section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 'A'			;Check if uppercase first
	jl _check_lowercase
	cmp rdi, 'Z'
	jg _check_lowercase
	mov rax, 1
	ret

_check_lowercase:
	cmp rdi, 'a'			;Check if lowercase then return
	jl _no
	cmp rdi, 'z'
	jg _no
	mov rax, 1
	ret

_no:
	mov rax, 0
	ret
