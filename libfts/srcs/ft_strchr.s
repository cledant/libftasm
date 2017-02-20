section .text
	global _ft_strchr

_ft_strchr:
	cld						;Clear direction flag
	mov r9, rdi				;Saves s addr
	xor al, al				;Finding String len
	mov rcx, -1
	repne scasb
	mov r10, -1				;Saves len in r10 counting NULL terminator
	sub r10, rcx
	mov rcx, r10			;Setting rcx to string len
	mov rdi, r9				;Restore s addr in rdi
	mov rax, rsi			;Setting char to find
	repne scasb				;Scan rdi for value in al
	mov r8, r10				;Set position found in r8
	sub r8, rcx
	sub r8, 1
	add r9, r8				;Set found char addr in r9
	cmp byte [r9], sil		;Check if really found or last char of string
	je _ok
	mov rax, 0
	ret

_ok:
	mov rax, r9
	ret
