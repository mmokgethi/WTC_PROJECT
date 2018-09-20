# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 11:56:35 by mmokgeth          #+#    #+#              #
#    Updated: 2018/07/16 11:56:37 by mmokgeth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				avm

CC =				clang++ -std=c++11

FLAGS =				-Wall -Werror -Wextra -g

HEADERS =			-I ./

SRC_DIR =			./

COMPILED_DIR_NAME =	compiled
COMPILED_DIR =		./$(COMPILED_DIR_NAME)/

FILENAMES =			main AbstractVM Operand OperandFactory PolishReverseCalculator

COMPILED_PATHS :=	$(addsuffix .o,$(FILENAMES))
COMPILED_PATHS :=	$(addprefix $(COMPILED_DIR),$(COMPILED_PATHS))

all: $(NAME)

$(NAME): $(COMPILED_PATHS)
	$(CC) -o $(NAME) $(FLAGS) $(HEADERS) $(COMPILED_PATHS)

$(COMPILED_PATHS): $(COMPILED_DIR)%.o: $(SRC_DIR)%.cpp
	@/bin/mkdir -p $(COMPILED_DIR)
	$(CC) -c $(FLAGS) $(HEADERS) $< -o $@

clean:
	-/bin/rm -f $(COMPILED_PATHS)
	/usr/bin/find . -name "$(COMPILED_DIR_NAME)" -maxdepth 1 -type d -empty -delete

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all
