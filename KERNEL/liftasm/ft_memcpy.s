

global _ft_memcpy

section .text
_ft_memcpy:
	mov  rax, rdi
	test rdi, rdi
	jz done
	test rsi, rsi
	jz done
memcpy:
	movsx rcx, edx
	cld
	rep movsb
done:
	ret
