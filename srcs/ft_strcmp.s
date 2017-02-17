section .text
	global _ft_strcmp

_ft_strcmp:
	cmp byte [rdi], 0				;Test end of s1
	je _exit
	cmpsb							;Compare s1 and s2
	jne	_exit
	inc	rdi
	inc rsi
	jmp _ft_strcmp					;Loop to the beginning

_exit:
	xor rax, rax					;Init rax to 0
	mov al, [rdi]					;Calculate return value
	mov ah, [rsi]
	sub al, ah
	xor ah, ah						;Set ah to 0
	ret
