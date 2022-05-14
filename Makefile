# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 14:39:55 by lde-alen          #+#    #+#              #
#    Updated: 2022/05/15 02:25:01 by lde-alen         ###   ########.fr        #
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
				./srcs/ft_list.c			\
				./srcs/ft_errors.c			\
				./srcs/ft_print_errors.c	\
				./srcs/ft_utils.c			\
				./srcs/ft_sort_utils.c		\
				./srcs/ft_free.c			\
				./srcs/ft_funct_utils.c		\
				./srcs/ft_funct_utils2.c	\

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror -g3

LIBFT		=	./ft_libft/libft.a

CC			=	gcc

$(NAME)		:	$(OBJS)
				@make -C ./ft_libft
				@$(CC) $(OBJS) $(LIBFT) -o $(NAME)

all			:	$(NAME)

clean		:
				@make clean -C ./ft_libft
				@rm -rf $(OBJS)

fclean		:	clean
				@make fclean -C ./ft_libft
				@rm -rf $(NAME)

re			:	clean fclean all
