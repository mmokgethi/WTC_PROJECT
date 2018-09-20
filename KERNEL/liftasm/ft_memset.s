# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:58:02 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:48:06 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_memset

_ft_memset:
	mov	rcx, rdx
	mov	rax, rsi
	mov	rbx, rdi
	rep	stosb
	mov	rax, rbx
	ret
