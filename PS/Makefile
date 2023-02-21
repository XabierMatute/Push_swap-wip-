# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:51:32 by xmatute-          #+#    #+#              #
#    Updated: 2023/02/13 17:12:52 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

SRC :=	main.c \
		utils/ft_nlstdup.c	\
		imputerror/checkrep.c \
		imputerror/imputerror.c \
		imputerror/inrange.c \
		imputerror/numeric.c \
		utils/Bprintnlst.c \
		utils/end.c \
		utils/ft_error.c \
		utils/ft_inorder.c \
		utils/ft_isdigit.c \
		utils/ft_isspaced.c \
		utils/ft_nlstadd_front.c \
		utils/ft_nlstbigger.c \
		utils/ft_nlstfree.c \
		utils/ft_nlstlast.c \
		utils/ft_nlstnew.c \
		utils/ft_nlstsize.c \
		utils/ft_strncmp.c \
		utils/ft_wlen.c \
		moves/m23.c \
		moves/m5.c \
		moves/push.c \
		moves/push_swap.c \
		moves/rotate.c \
		moves/rrotate.c \
		moves/swap.c \
		moves/swap_in.c \
		bestia/beast.c \
		bestia/bestanser.c \
		bestia/printanser.c \
		bestia/rightanser.c \
		algoritmo/algoritmo.c \
		algoritmo/smallest.c \
		algoritmo/biggest.c \
		algoritmo/moveup.c \
		 
		
OBJ := $(SRC:%.c=%.o)

SANI 	:= -fsanitize=address -g3

CC 		:= gcc
CFLAGS 	:= -Wall  -Wextra -Werror $(SANI)
# CFLAGS 	:= -Wall -Werror -Wextra $(SANI)

RM 		:= rm -rf

val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes


all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re