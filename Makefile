# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 14:39:55 by lde-alen          #+#    #+#              #
#    Updated: 2022/03/17 17:00:25 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	./srcs/main.c		\

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
