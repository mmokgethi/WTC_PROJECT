# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:55:40 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:46:10 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_bzero

_ft_bzero:
	cmp	rdi, 0
	je	end
	mov	rbx, rdi
	xor	rcx, rcx
	jmp	loop

loop:
	cmp	rsi, rcx
	je	end
	mov	byte [rbx], 0
	inc	rbx
	inc	rcx
	jmp	loop

end:
	ret
