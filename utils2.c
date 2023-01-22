/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:46:54 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 04:56:40 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// it gives me the value of the smalest number 
// that is bigger then nb
int	ft_get_min_max(t_stack *stack, int nb)
{
	int		max;
	t_node	*head;

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

// it gives the biggest number in stack
int	ft_get_max(t_stack *stack)
{
	t_node	*head;
	int		max;

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

// it gives the smallest number in stack
int	ft_get_min(t_stack *stack)
{
	t_node	*head;
	int		min;

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

// it rotates the stack "rotations" + 1 number of times
void	ft_rotatea(t_stack *stack, int rotations)
{
	int	half;

	rotations++;
	half = stack->size / 2;
	if (rotations <= half)
	{
		while (rotations)
		{
			ft_rotate_stack(stack, "ra\n");
			rotations--;
		}
	}
	else
	{
		rotations = stack->size - rotations;
		while (rotations)
		{
			ft_reverse_rotate_stack(stack, "rra\n");
			rotations--;
		}	
	}
}

// it rotates the stack "rotations" + 1 number of times
void	ft_rotateb(t_stack *stack, int rotations)
{
	int	half;

	rotations++;
	half = stack->size / 2;
	if (rotations <= half)
	{
		while (rotations)
		{
			ft_rotate_stack(stack, "rb\n");
			rotations--;
		}
	}
	else
	{
		rotations = stack->size - rotations;
		while (rotations)
		{
			ft_reverse_rotate_stack(stack, "rrb\n");
			rotations--;
		}	
	}
}
