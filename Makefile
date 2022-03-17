# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 14:39:55 by lde-alen          #+#    #+#              #
#    Updated: 2022/03/17 19:44:01 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	./srcs/main.c				\
				./srcs/push_swap_funct_a.c	\
				./srcs/push_swap_funct_b.c	\
				./srcs/push_swap_funct.c	\
				./srcs/push_swap.c			\

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	./libft/libft.a

CC			=	gcc

$(NAME)		:	$(OBJS)
				make -C ./libft
				$(CC) $(OBJS) $(LIBFT) -o $(NAME)

all			:	$(NAME)

clean		:
				make clean -C ./libft
				rm -rf $(OBJS)

fclean		:	clean
				make fclean -C ./libft
				rm -rf $(NAME)

re			:	all clean fclean re
