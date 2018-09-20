# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:53:43 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:53:44 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_toupper

section .text
_ft_toupper:
	mov rax, rdi
	cmp rdi, 0x61
	jl return
	cmp rdi, 0x7a
	jg return

upper:
	sub rax, 0x20
	jmp return

return:
	ret
