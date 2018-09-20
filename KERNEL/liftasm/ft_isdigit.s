# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:56:18 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:47:09 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_isdigit

_ft_isdigit:
	cmp		rdi, 48
	jl		false
	cmp		rdi, 57
	jg		false

true:
	mov	rax, 1
	jmp	end

false:
	mov	rax, 0
	jmp	end

end:
	ret			
