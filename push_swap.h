/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:06:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 05:05:17 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"libftprintf/ft_printf.h"
# include	"libftprintf/libft.h"
# include	<limits.h>

typedef struct s_operation
{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_operation;

typedef struct s_node
{
	int				x;
	int				flag;
	int				tot;
	t_operation		price;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*list;
}	t_stack;

void	ft_push(t_stack *stack, t_node *node);
t_node	*ft_pop(t_stack *stack);
void	ft_push_to(t_stack *src, t_stack *dst, char *msg);
void	ft_swap(t_stack *stack, char *msg);
void	ft_swap_ab(t_stack *a, t_stack *b, char *msg);
void	ft_rotate_stack(t_stack *stack, char *msg);
void	ft_rotate_ab(t_stack *a, t_stack *b, char *msg);
void	ft_reverse_rotate_stack(t_stack *stack, char *msg);
void	ft_reverse_rotate_ab(t_stack *a, t_stack *b, char *msg);
void	ft_rotatea(t_stack *stack, int rotations);
void	ft_rotateb(t_stack *stack, int rotations);
void	sort3(t_stack *stack);
void	sort5(t_stack *a);
void	sort6plus(t_stack *a);
void	ft_sort(t_stack *a);
int		ft_check_if_sorted(t_stack *stack);
int		ft_get_position(t_stack *stack, int nb);
int		ft_get_min_max(t_stack *stack, int nb);
int		ft_get_min(t_stack *stack);
int		ft_get_max(t_stack *stack);
long	ft_myatoi(char *str);
t_node	*ft_newnode(int x);
void	print(t_stack *x);
void	ft_top(t_stack *stack);
void	ft_right_inb(t_stack *a, t_stack *b);
void	ft_total(t_node *list);
void	ft_best_to_push(t_stack *a, t_stack *b);
void	ft_rev_rot(t_stack *a, t_stack *b, t_node *node);
void	ft_rot(t_stack *a, t_stack *b, t_node *node);
void	ft_tozero(t_stack *a);
void	ft_myfree(t_stack *stack);
void	check_double(int *tab, int len);
int		*ft_error(int ac, char *av[]);
void	ft_iferror(long nb, char c);
t_stack	*ft_allocat(int len, char *av[]);
char	**ft_mysplit(char const *s, char c);
int		ft_count(char const *s, char c);

#endif 
