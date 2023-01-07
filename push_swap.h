/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:06:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/07 13:35:42 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

# include"libftprintf/ft_printf.h"
# include"libftprintf/libft.h"

typedef struct s_node
{
	int 			x;
	struct s_node	*next;
}	t_node;

typedef	struct s_stack
{
	int 	size;
	t_node	*list;
}	t_stack;

void	ft_swap_a(t_stack *a);
void	ft_swap_b(t_stack *b);
void	ft_swap_ab(t_stack *a, t_stack *b);
void	ft_push_a(t_stack *a, t_stack *b);
void	ft_push_b(t_stack *a, t_stack *b);
void	ft_rotate_a(t_stack *a);
void	ft_rotate_b(t_stack *b);
void	ft_rotate_ab(t_stack *a, t_stack *b);
void	ft_reverse_rotate_a(t_stack *a);
void	ft_reverse_rotate_b(t_stack *b);
void	ft_reverse_rotate_ab(t_stack *a, t_stack *b);
void	ft_lstback(t_node **list, t_node *node);
void	ft_lstfront(t_node **list, t_node *node);
int		ft_lsize(t_node *list);
int		ft_check_if_sorted(t_stack *a);
t_node	*ft_newnode(int x);
t_node	*ft_lastnode(t_node **list);
void	ft_NULLlast(t_node *list);

#endif 
