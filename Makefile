#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 11:09:03 by obamzuro          #+#    #+#              #
#    Updated: 2018/05/01 12:52:46 by obamzuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_strnstr.c				\
	  ft_strlen.c				\
	  ft_putchar.c				\
	  ft_putstr.c				\
	  ft_putnbr.c				\
	  ft_nbr_size.c				\
	  ft_printf.c				\
	  ft_decimal.c				\
	  ft_unsigned.c				\
	  ft_unsigned_octal.c		\
	  ft_unsigned_hex.c			\
	  ft_char.c					\
	  ft_string.c				\
	  ft_getvarg.c				\
	  ft_fillglob.c				\
	  ft_printf_plus.c			\
	  ft_pf_write.c				\

SRCDIRS = $(addprefix source/, $(SRC))

HDIR = include

OBJECT = $(SRCDIRS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

%.o:%.c
	gcc -o $@ -c $< -I $(HDIR)

mai:
	gcc main.c -I $(HDIR) -L . -lftprintf

clean:
	rm -f $(OBJECT)
	find . -name ".*.sw[pon]" -exec rm -f {} \;

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette
