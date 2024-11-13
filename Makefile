# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 17:31:47 by luinasci          #+#    #+#              #
#    Updated: 2024/11/13 18:13:54 by luinasci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c
		ft_printf_utils.c
		ft_transform.c

HEADER =	ft_printf.h

OBJS = $(SRCS:.c=.o)

BONUS =

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -r $@ $^

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) -r $(NAME) $^

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
