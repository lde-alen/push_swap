# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 14:39:55 by lde-alen          #+#    #+#              #
#    Updated: 2022/03/17 20:59:24 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	./srcs/main.c				\
				./srcs/push_swap_funct_a.c	\
				./srcs/push_swap_funct_b.c	\
				./srcs/push_swap_funct.c	\
				./srcs/push_swap.c			\
				./srcs/parser.c				\
				./srcs/init.c				\

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	./ft_libft/libft.a

CC			=	gcc

$(NAME)		:	$(OBJS)
				make -C ./ft_libft
				$(CC) $(OBJS) $(LIBFT) -o $(NAME)

all			:	$(NAME)

clean		:
				make clean -C ./ft_libft
				rm -rf $(OBJS)

fclean		:	clean
				make fclean -C ./ft_libft
				rm -rf $(NAME)

re			:	all clean fclean re
