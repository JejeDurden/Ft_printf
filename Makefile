# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/11/25 15:20:27 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libftprintf

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC =	main.c						\
		ft_printf					\
		ft_get_arg.c				\
		ft_parse_arg.c				\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@make -C ./libft/
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRC)
	@$(CC) $(CFLAGS) -L./libft/ -lft $(OBJ) -o $(NAME)

%.o : %.c
	gcc -c $^ -o $@
	@echo "$(NAME) created successfully"

clean:
	@make clean -C ./libft/
	@echo "Erasing .o files..."
	@rm -f $(OBJ)
	@echo "Done."

fclean: clean
	@make fclean -C ./libft/
	@echo "Erasing $(NAME)..."
	@rm -f $(NAME) $(LIB)
	@echo "Done."

re: fclean all clean
