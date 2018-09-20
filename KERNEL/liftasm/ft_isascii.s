# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:56:48 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:46:59 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl false
	cmp rdi, 127
	jg false

true:
	mov rax, 1
	jmp end

false:
	mov rax, 0
	jmp end

end:
	ret
