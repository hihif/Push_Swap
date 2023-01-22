# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 18:40:36 by fhihi             #+#    #+#              #
#    Updated: 2023/01/22 03:39:54 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c lincked_list.c Operations/ft_rotate.c Operations/ft_reverse_rotate.c Operations/ft_push.c \
Operations/ft_swap.c utils.c utils2.c utils3.c utils4.c sorting.c mysplit.c allocat.c Operations/pop.c \
Operations/push.c

OBJ = $(SRC:.c=.o)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I.

$(NAME): $(OBJ)
	make -C libftprintf
	cc $(OBJ) ./libftprintf/libftprintf.a -o $@
	# @make clean

all: $(NAME)

clean:
	make -C libftprintf clean
	$(RM) $(OBJ)

fclean: clean
	make -C libftprintf fclean
	$(RM) $(NAME)

re: fclean all