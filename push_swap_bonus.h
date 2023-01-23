/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:23:01 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 17:13:53 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include	"libftprintf/ft_printf.h"
# include	"libftprintf/libft.h"
# include	"libftprintf/get_next_line.h"
# include	<limits.h>
# include	"push_swap.h"

void	check_double(int *tab, int len);
int		*ft_error(int len, char *av[]);
void	ft_one(char *av[]);
void	ft_many(int ac, char *av[]);
void	ft_push(t_stack *stack, t_node *node);
t_node	*ft_pop(t_stack *stack);
void	ft_push_to(t_stack *src, t_stack *dst, char *msg);
void	ft_swap(t_stack *stack, char *msg);
void	ft_swap_ab(t_stack *a, t_stack *b, char *msg);
void	ft_rotate_stack(t_stack *stack, char *msg);
void	ft_rotate_ab(t_stack *a, t_stack *b, char *msg);
void	ft_reverse_rotate_stack(t_stack *stack, char *msg);
void	ft_reverse_rotate_ab(t_stack *a, t_stack *b, char *msg);
int		ft_count(char const *s, char c);
char	**ft_mysplit(char const *s, char c);
void	ft_myfree(t_stack *stack);
t_stack	*ft_allocat(int len, char **av);
void	ft_read_operations(t_stack *a, t_stack *b);
void	check_op(t_stack *a, t_stack *b, char *op);
void	ft_do_operations(t_stack *a);
void	ft_iferror(long nb, char c);
long	ft_myatoi(char *str);

#endif