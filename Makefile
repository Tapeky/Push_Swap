# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsadouk <tsadouk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 17:26:32 by tsadouk           #+#    #+#              #
#    Updated: 2023/12/05 17:26:32 by tsadouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Werror -Wextra

SRCS =  srcs/ft_printf.c \
		srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_putdecimal.c \
		srcs/ft_putptr.c \
		srcs/ft_putunsigned.c \
		srcs/ft_puthexa.c \
		srcs/ft_putbighexa.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean