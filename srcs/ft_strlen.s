section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0
	mov rcx, rdi
	jmp _loop
	
_loop:
	cmp [rcx], byte 0
	je	_ret
	inc rax
	inc rcx
	jmp _loop

_ret:
	ret
