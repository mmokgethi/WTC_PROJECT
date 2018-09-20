# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:56:57 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:47:20 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_isprint

_ft_isprint:
	cmp	rdi, 32
	jl	false
	cmp	rdi, 126
	jg	false

true:
	mov	rax, 1
	jmp	end

false:
	mov	rax, 0
	jmp	end

end:
	ret
