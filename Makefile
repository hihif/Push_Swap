# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 18:40:36 by fhihi             #+#    #+#              #
#    Updated: 2023/01/07 19:22:48 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c lincked_list.c Operations/pa.c Operations/pb.c Operations/ra.c Operations/rb.c \
Operations/rr.c Operations/rra.c Operations/rrb.c Operations/rrr.c Operations/sb.c Operations/sa.c \
Operations/ss.c utils.c

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