/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:06:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/18 23:04:13 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

# include"libftprintf/ft_printf.h"
# include"libftprintf/libft.h"
# include<limits.h>

typedef	struct s_operation
{
	int pa;
	int pb;
	int sa;
	int sb;
	int ss;
	int ra;
	int rb;
	int rr;
	int rra;
	int rrb;
	int rrr;
}	t_operation;

typedef	struct s_best
{
	int rotate;
	int *array;	
}	t_best;

typedef struct s_node
{
	int 			x;
	int 			flag;
	int				tot;
	t_operation		price;
	struct s_node	*next;
}	t_node;

typedef	struct s_stack
{
	int 	size;
	t_node	*list;
}	t_stack;

void	ft_swap_a(t_stack *a, char *msg);
void	ft_swap_b(t_stack *b, char *msg);
void	ft_swap_ab(t_stack *a, t_stack *b, char *msg);
void	ft_push_a(t_stack *a, t_stack *b, char *msg);
void	ft_push_b(t_stack *a, t_stack *b, char *msg);
void	ft_rotate_a(t_stack *a, char *msg);
void	ft_rotate_b(t_stack *b, char *msg);
void	ft_rotate_ab(t_stack *a, t_stack *b, char *msg);
void	ft_reverse_rotate_a(t_stack *a, char *msg);
void	ft_reverse_rotate_b(t_stack *b, char *msg);
void	ft_reverse_rotate_ab(t_stack *a, t_stack *b, char *msg);
void	ft_lstback(t_node **list, t_node *node);
void	ft_lstfront(t_node **list, t_node *node);
void	ft_rotate(t_stack *stack, int rotations);
void	ft_NULLlast(t_node *list);
void	sort3(t_stack *stack);
void	sort5(t_stack *stack);
int		ft_lsize(t_node *list);
int		ft_check_if_sorted(t_stack *stack);
int		ft_get_position(t_stack *stack, int nb);
int 	ft_get_min_max(t_stack *stack, int nb);
int		ft_get_min(t_stack *stack);
int		ft_get_max(t_stack *stack);
t_node	*ft_newnode(int x);
t_node	*ft_lastnode(t_node **list);
t_stack	*ft_copy(t_stack *stack);
t_best	*ft_get_longest_sorted(t_stack *stack);
void	ft_overwrite(t_node *list, int *array);
void	print(t_stack *x);
void	QSort(int *a, int s, int e);
int		ft_get_chunk(t_stack *stack);
void	ft_top(t_stack *stack);
void	ft_right_inb(t_stack *a, t_stack *b);
void	ft_total(t_node *list);
void	ft_best_to_push(t_stack *a, t_stack *b);
void	ft_tozero(t_stack *a);

#endif 
