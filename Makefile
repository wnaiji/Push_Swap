# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnaiji <wnaiji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 17:46:04 by wnaiji            #+#    #+#              #
#    Updated: 2023/05/22 15:50:57 by wnaiji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_list.c \
		ft_push.c \
		ft_reverse_rotate.c \
		ft_rotate.c \
		ft_swap.c \
		ft_putstr.c \
		ft_split.c \
		ft_outils_libft.c \
		ft_parsing.c \
		ft_check_order.c \
		ft_cases_2_to_5.c \
		ft_cases_3.c \
		ft_what_size.c \

OBJS = $(SRC:.c=.o)

NAME = push_swap

CFLAGS = -Werror -Wextra -Wall

.c.o: $(SRC)
	gcc $(CFLAGS) -I . -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
