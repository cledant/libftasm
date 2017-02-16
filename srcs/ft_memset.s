section .text
	global _ft_memset

_ft_memset:
	mov rax, rdi		;Set return value if len = 0
	cmp rdx, 0			;Exit if len = 0
	jnz _set
	ret

_set:
	cld					;Reset direction flag
	mov	r8, rdi			;Backup b into r8
	mov rax, rsi		;Set rax to c
	mov rcx, rdx		;Set counter for rep
	rep stosb
	mov rax, r8			;Set return value
	ret
