section .text
	global _ft_toupper

_ft_toupper:
	cmp rdi, 'a'			;Check if between a and z
	jl	_ret_unchanged
	cmp rdi, 'z'
	jg	_ret_unchanged
	jmp _ret_changed		;Uppering case

_ret_unchanged:
	mov rax, rdi
	ret

_ret_changed:
	mov rax, rdi
	sub rax, 32
	ret
