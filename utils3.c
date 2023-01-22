/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:24:02 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 04:18:35 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// this one rotates if needed
void	ft_rot(t_stack *a, t_stack *b, t_node *node)
{
	while (node->price.ra || node->price.rb || node->price.rr)
	{
		if (node->price.ra)
		{
			ft_rotate_stack(a, "ra\n");
			node->price.ra--;
		}
		if (node->price.rb)
		{
			ft_rotate_stack(b, "rb\n");
			node->price.rb--;
		}
		if (node->price.rr)
		{
			ft_rotate_ab(a, b, "rr\n");
			node->price.rr--;
		}
	}
}

// this one reverse rotates if needed
void	ft_rev_rot(t_stack *a, t_stack *b, t_node *node)
{
	while (node->price.rra || node->price.rrb || node->price.rrr)
	{
		if (node->price.rra)
		{
			ft_reverse_rotate_stack(a, "rra\n");
			node->price.rra--;
		}
		if (node->price.rrb)
		{
			ft_reverse_rotate_stack(b, "rrb\n");
			node->price.rrb--;
		}
		if (node->price.rrr)
		{
			ft_reverse_rotate_ab(a, b, "rrr\n");
			node->price.rrr--;
		}
	}
}

// this function sets evrything in its place so that i can start pushing
void	ft_best_to_push(t_stack *a, t_stack *b)
{
	t_node	*head;
	t_node	*node;
	int		min;

	head = a->list;
	min = head->tot;
	node = head;
	while (head)
	{
		if (head->tot < min)
		{
			min = head->tot;
			node = head;
		}
		head = head->next;
	}
	ft_rot(a, b, node);
	ft_rev_rot(a, b, node);
}

// this function resets my integers in the struct
void	ft_tozero(t_stack *a)
{
	t_node	*head;

	head = a->list;
	while (head)
	{
		head->price.ra = 0;
		head->price.rb = 0;
		head->price.rr = 0;
		head->price.rra = 0;
		head->price.rrb = 0;
		head->price.rrr = 0;
		head->tot = 0;
		head = head->next;
	}
}
