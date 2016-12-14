# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/12/14 16:52:14 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC =	ft_printf.c					\
		ft_get_arg.c				\
		ft_get_char.c				\
		ft_parse_arg.c				\
		ft_parse_flags.c			\
		ft_parse_width.c			\
		ft_arg_str.c				\
		ft_arg_char.c				\
		ft_arg_nb.c					\
		ft_arg_unb.c				\
		ft_parse_precision.c		\
		ft_width_num.c				\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@make -C ./libft/
		@$(CC) -I$(INCLUDES) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@libtool -static -o $(NAME) $(NAME) ./libft/libft.a
		@ranlib $(NAME)
		@echo "$(NAME) created successfully"

$(OBJ) : $(SRC)
		@$(CC) -o $@ -c $<

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
