# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:57:44 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:48:14 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_puts
	extern	_ft_strlen
	
_ft_puts:
	mov		rcx, rdi
	call	_ft_strlen
	mov		rdi, 1
	mov		rdx, rax
	mov		rax, 0x2000004
	mov		rsi, rcx
	syscall
	
	mov		rdx, 1
	mov		rax, 0x2000004
	lea		rsi, [rel newline]
	syscall
	
end:
	ret
	
section	.data
	newline	db	0x0a
