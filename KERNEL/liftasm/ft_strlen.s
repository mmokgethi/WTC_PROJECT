# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:49:17 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:49:24 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strlen

section .text
_ft_strlen:
	xor rcx, rcx
	test rdi, rdi
	jz done

next:
	mov rcx, -1
	mov al, 0x0
	cld
	repne scasb
	not rcx
	dec rcx

done:
	mov rax, rcx
	ret
