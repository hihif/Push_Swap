# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 18:40:36 by fhihi             #+#    #+#              #
#    Updated: 2023/01/22 19:10:48 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUSNAME = checker

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c lincked_list.c Operations/ft_rotate.c Operations/ft_reverse_rotate.c Operations/ft_push.c \
Operations/ft_swap.c utils.c utils2.c utils3.c utils4.c sorting.c mysplit.c allocat.c Operations/pop.c \
Operations/push.c

SRC_BONUS = ft_checker_bonus.c utils_bonus.c utils2_bonus.c allocat_bonus.c lincked_list.c Operations/ft_rotate.c \
Operations/ft_reverse_rotate.c Operations/ft_push.c Operations/ft_swap.c Operations/pop.c Operations/push.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I.

$(NAME): $(OBJ)
	make -C libftprintf
	make -C libftprintf clean
	cc $(OBJ) ./libftprintf/libftprintf.a -o $@

$(BONUSNAME): $(OBJ_BONUS)
	make -C libftprintf
	make -C libftprintf clean
	cc $(OBJ_BONUS) ./libftprintf/libftprintf.a -o $@

all: $(NAME)

bonus : $(BONUSNAME)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME) $(BONUSNAME)

re: fclean all clean bonus