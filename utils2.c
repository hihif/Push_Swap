/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:46:54 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/18 21:18:47 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_get_min_max(t_stack *stack, int nb)
{
	int max;
	t_node *head;

	max = ft_get_max(stack);
	head = stack->list;
	while (head)
	{
		if (head->x > nb && head->x < max)
			max = head->x;
		head = head->next;
	}
	if (nb > ft_get_max(stack))
		max = ft_get_min(stack);
	return (max);
}

int	ft_get_max(t_stack *stack)
{
	t_node	*head;
	int max;
	
	head = stack->list;
	max = head->x;
	while (head)
	{
		if (max < head->x)
			max = head->x;
		head = head->next;
	}
	return (max);
}

int	ft_get_min(t_stack *stack)
{
	t_node	*head;
	int min;

	head = stack->list;
	min = head->x;
	while (head)
	{
		if (min > head->x)
			min = head->x;
		head = head->next;
	}
	return (min);
}

t_stack	*ft_copy(t_stack *stack)
{
	t_stack *new;
	t_node *tmp1;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return NULL;
	new->size = stack->size;
	tmp1 = stack->list;
	while(tmp1)
	{
		ft_lstback(&new->list, ft_newnode(tmp1->x));
		tmp1 = tmp1->next;
	}
	return (new);
}

void	ft_rotate(t_stack *stack, int rotations)
{
	int half;

	half = stack->size / 2;
	if (rotations <= half)
	{
		while(rotations)
		{
			ft_rotate_a(stack, "rb\n");
			rotations--;
		}
	}
	else 
	{
		rotations = stack->size - rotations;
		while(rotations)
		{
			ft_reverse_rotate_a(stack, "rrb\n");
			rotations--;
		}	
	}
}