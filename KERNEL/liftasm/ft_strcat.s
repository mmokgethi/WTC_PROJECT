# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 16:55:57 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:48:23 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_strcat

_ft_strcat:
	mov	rbx, rdi
	mov	rcx, rsi

first_loop:
	cmp	byte[rbx], 0
	je	second_loop
	inc	rbx
	jmp	first_loop

second_loop:
	cmp	byte[rcx], 0
	je	end
	mov	al, byte[rcx]
	mov	byte[rbx], al
	inc	rcx
	inc	rbx
	jmp	second_loop

end:
	mov	rax, rdi
	ret
