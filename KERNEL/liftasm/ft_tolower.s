# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:54:35 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:54:37 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_tolower

section .text
_ft_tolower:
	mov rax, rdi
	cmp rdi, 0x41
	jl return
	cmp rdi, 0x5a
	jg return

lower:
	add rax, 0x20
	jg return

return:
	ret
