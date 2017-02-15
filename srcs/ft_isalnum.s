section .text
	global _ft_isalnum

_ft_isalnum:
	xor rax, rax			;Initialize rax to 0
	cmp rdi, 'A'			;Check if uppercase first
	jl _check_lowercase
	cmp rdi, 'Z'
	jg _check_lowercase
	inc rax
	ret

_check_lowercase:
	cmp rdi, 'a'			;Check if lowercase then numbers
	jl _check_number
	cmp rdi, 'z'
	jg _check_number
	inc rax
	ret

_check_number:
	cmp rdi, '0'			;Check if number then return
	jl _no
	cmp rdi, '9'
	jg _no
	inc rax
	ret

_no:
	ret
