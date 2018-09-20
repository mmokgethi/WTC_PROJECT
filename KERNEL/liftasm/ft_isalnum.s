# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:56:38 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:46:20 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_isalnum
	extern 	_ft_isalpha
	extern	_ft_isdigit

_ft_isalnum:
	call	_ft_isalpha
	cmp	rax, 1
	je	true
	call	_ft_isdigit
	cmp	rax, 1
	je	true

false:
	jmp	end

true:
	mov	rax, 1
	jmp	end

end:
	ret
