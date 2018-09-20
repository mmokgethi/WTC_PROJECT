# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:14:18 by mmokgeth          #+#    #+#              #
#    Updated: 2018/09/14 15:14:20 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
AS = nasm
ASFLAGS = -f macho64

SRC = 	ft_cat.s \
		ft_bzero.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_isprint.s \
		ft_memalloc.s \
		ft_memcpy.s \
		ft_memset.s \
		ft_puts.s \
		ft_strcat.s \
		ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_tolower.s \
		ft_toupper.s \

OBJECT = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all


		
