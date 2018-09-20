# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:59:20 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 09:40:11 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

%ifdef OSX
	%define WRITE 0x2000004
	%define READ 0x2000003
%elif LINUX
	%define WRITE 0x2000004
	%define READ 0x2000003
%endif

section	.bss
	buf resb 10
	.size equ $ - buf

section	.text
	global	_ft_cat

_ft_cat:
	enter 0, 0
	cmp rdi, 0 ; if fd
	jl end

readFile:
	push rdi
	mov rax, READ
	lea rsi, [rel buf]
	mov rdx, buf.size
	syscall
	jc error
	cmp rax, 0
	jle error
	jmp writeFile
	
writeFile:
	mov rdx, rax
	mov rax, WRITE
	mov rdi, 1
	lea rsi, [rel buf]
	syscall
	cmp rax, 0
	jl error
	pop rdi
	jmp readFile ; recurse

error:
	pop	rdi
	leave
	ret

end:
	leave
	ret
