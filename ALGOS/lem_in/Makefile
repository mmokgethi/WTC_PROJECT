# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 09:41:45 by mmokgeth          #+#    #+#              #
#    Updated: 2018/07/04 09:41:59 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in
LIBF = libft/
GNL = gnl/get_next_line.c
SRCS = src/
CCFL = -Wall -Wextra -Werror -lncurses -ltermcap -L $(LIBF) -lft

all: $(NAME)

$(NAME):
		@make -C $(LIBF) re
		@gcc $(CCFL) $(SRCS)*.c $(GNL) -o $(NAME)

clean:
		@make -C $(LIBF) clean

fclean:
		@make -C $(LIBF) fclean
		@/bin/rm -rf $(NAME)

re: fclean all
