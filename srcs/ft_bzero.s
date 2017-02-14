section .text
	global _ft_bzero

_ft_bzero:
	mov rcx, rdi
	mov rdx, 0
	cmp rdx, rsi
	jl _loop

_loop:
	mov [rcx], byte 0
	inc rcx
	inc rdx
	cmp rdx, rsi
	jl _loop
