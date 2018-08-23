# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdevessi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 19:05:39 by bdevessi          #+#    #+#              #
#    Updated: 2018/08/20 20:23:56 by bdevessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef VERBOSE
.SILENT:
endif

PROGRAM = do-op

FLAGS = -Wall -Wextra -Werror 

FILES := *.c

all:
	gcc -o $(PROGRAM) $(FLAGS) $(FILES)

clean:
	rm -rf $(PROGRAM)
