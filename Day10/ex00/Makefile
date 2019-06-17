# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-men <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/30 06:10:51 by ahel-men          #+#    #+#              #
#    Updated: 2019/01/30 06:10:57 by ahel-men         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FILES= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INCLUDE= ./includes
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS= -Werror -Wextra -Wall

all :
	gcc -I $(INCLUDE) $(FLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJECTS)

fclean :
	/bin/rm -f $(NAME)
re : fclean all
