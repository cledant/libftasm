section .text
	global _ft_tolower

_ft_tolower:
	cmp rdi, 'A'			;Check if between A and Z
	jl	_ret_unchanged
	cmp rdi, 'Z'
	jg	_ret_unchanged
	jmp _ret_changed		;Lowering case

_ret_unchanged:
	mov rax, rdi
	ret

_ret_changed:
	mov rax, rdi
	add rax, 32
	ret
