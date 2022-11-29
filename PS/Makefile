# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:51:32 by xmatute-          #+#    #+#              #
#    Updated: 2022/11/17 11:38:25 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		:= gcc
CFLAGS 	:= #-Wall -Werror -Wextra

RM 		:= rm -rf

SANI 	:= -fsanitize=address -g3
val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

all : push_swap

push_swap : 
		$(CC) $(CFLAGS) $(SANI) main.c utils/* imputerror/* moves/* -o push_swap

clean :
		$(RM) *.o

fclean : clean
		$(RM) push_swap

re : fclean all

.PHONY : all clean fclean re