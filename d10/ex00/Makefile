# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 17:07:57 by bdevessi          #+#    #+#              #
#    Updated: 2018/08/22 16:44:28 by bdevessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

all:
	gcc -c $(SRCS:%=srcs/%)
	ar rcs $(LIB) $(SRCS:%.c=%.o)

clean:
	rm -f $(SRCS:%.c=%.o)

fclean: clean
	rm -f $(LIB)

re: fclean all
