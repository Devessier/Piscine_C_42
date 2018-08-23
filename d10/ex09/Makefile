# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 19:05:39 by bdevessi          #+#    #+#              #
#    Updated: 2018/08/21 11:30:11 by bdevessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef VERBOSE
.SILENT:
endif

PROGRAM = ft_advanced_do-op

FLAGS = -Wall -Wextra -Werror -I. -Iincludes

FILES := main.c srcs/*

HEADERS := ft_opp.h includes/*

all: $(PROGRAM)

ft_advanced_do-op: 
	gcc -o $(PROGRAM) $(FLAGS) $(FILES)

clean:
	rm -rf $(PROGRAM)
