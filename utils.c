/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:16:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/19 21:51:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// it checkes if the stack is sorted
int	ft_check_if_sorted(t_stack *stack)
{
	t_node	*head;
	int		max;

	head = stack->list;
	max = head->x;
	head = head->next;
	while (head)
	{
		if (max <= head->x)
			max = head->x;
		else
			return (0);
		head = head->next;
	}
	return (1);
}

// it gives the position of the number nb in the stack
int	ft_get_position(t_stack *stack, int nb)
{
	int		i;
	t_node	*head;

	i = 0;
	head = stack->list;
	while (head)
	{
		if (head->x == nb)
			return (i);
		head = head->next;
		i++;
	}
	return (0);
}

// calculates nmber of rotation for each value to get to top
// and sets it to struct
void	ft_top(t_stack *stack)
{
	t_node	*head;
	int		i;

	i = 0;
	head = stack->list;
	while (i <= stack->size / 2)
	{
		head->price.ra = i;
		head = head->next;
		i++;
	}
	if (!(stack->size % 2))
		i--;
	i--;
	while (i > 0)
	{
		head->price.rra = i;
		head = head->next;
		i--;
	}
}

// calculates nmber of rotation in b stack for the top 
// element in a to get to right position
void	ft_right_inb(t_stack *a, t_stack *b)
{
	int		i;
	t_node	*head;

	head = a->list;
	while (head)
	{
		i = ft_get_position(b, ft_get_min_max(b, head->x));
		i++;
		while (i > 0)
		{
			if (i > b->size / 2)
			{
				i = b->size - i;
				while (i > 0)
				{
					head->price.rrb++;
					i--;
				}
			}
			else
				head->price.rb++;
			i--;
		}
		head = head->next;
	}
}

// it elumanates the commen instructions and calculates the total moves
// for each number on a stack
void	ft_total(t_node *head)
{
	t_node	*list;

	list = head;
	while (list)
	{
		while (list->price.ra && list->price.rb)
		{
			list->price.rr++;
			list->price.ra--;
			list->price.rb--;
		}
		while (list->price.rra && list->price.rrb)
		{
			list->price.rrr++;
			list->price.rra--;
			list->price.rrb--;
		}
		list->tot = list->price.ra + list->price.rb + list->price.rr + \
			list->price.rra + list->price.rrb + list->price.rrr;
		list = list->next;
	}
}
