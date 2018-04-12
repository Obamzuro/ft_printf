# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/10 15:44:09 by obamzuro          #+#    #+#              #
#    Updated: 2018/04/12 02:37:09 by obamzuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a

SRC = ft_printf.c			\
	  ft_prints.c			\
	  main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc -Wall -Wextra -Werror -o $(NAME) -L libft -lft $(OBJ)

%.o:%.c
	gcc -o $@ -c $< -I libft

libft/libft.a:
	make -C libft/

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
