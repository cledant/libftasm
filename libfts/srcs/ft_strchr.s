section .text
	global _ft_strchr

_ft_strchr:
	cld						;Clear direction flag
	mov rcx, -1				;Setting rcx to max value
	mov al, rsi				;Setting char to find
	repne scasb				;Scan rdi for value in al
	cmp [rdi], al
	je _ok
	mov rax, 0
	ret

_ok:
	mov rax, rdi
	ret
