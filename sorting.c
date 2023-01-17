/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:48:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/17 13:49:33 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort3(t_stack *stack)
{
	while(!ft_check_if_sorted(stack))
	{
		if (stack->list->x < stack->list->next->x)
		{
			ft_reverse_rotate_a(stack, "rra\n");

		}
		else
		{
			ft_swap_a(stack, "sa\n");
		}
	}
}

void	sort5(t_stack *stack)
{
	t_stack *b;

	b = (t_stack *)malloc(sizeof(t_stack));
	// print(stack);
	// while (b->size)
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min_max(stack, b->list->x)));
	// 	ft_push_a(stack, b, "pa\n");
	// }
	// while(!ft_check_if_sorted(stack))
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min(stack)));
	// }
	// print(stack);
	// print(stack);
	// printf("--------\n");
	// print(b);
}

void	ft_best_to_push(t_stack *a, t_stack *b)
{
	t_node *head;

	head = a->list;
	while (head)
	{
		
		head = head->next;
	}
}

// calculates nmber of rotation for each value to get to top
// and sets it to struct

void	ft_top(t_stack *stack)
{
	t_node *head;
	int i = 0;
	head = stack->list;
	while (i < stack->size)
	{
		stack->list->price->ra = ft_get_position(stack, head->x);
		head = head->next;
		i++;
	}
	while (i >= 0)
	{
		stack->list->price->rra = i;
		i--;
	}
}

int	ft_get_chunk(t_stack *stack)
{
	t_node *head;
	int arr[stack->size];
	int i;

	i = 0;
	head = stack->list;
	while (i < stack->size)
	{
		arr[i] = head->x;
		head = head->next;
		i++;
	}
	QSort(arr, 0, i - 1);
	return (arr[i / 2]);
}




























	// while (stack->size > 3)
	// {
	// 	ft_push_b(stack, b, "pb\n");
	// }
	// sort3(stack);
	// while (b->size)
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min_max(stack, b->list->x)));
	// 	ft_push_a(stack, b, "pa\n");
	// }
	// while(!ft_check_if_sorted(stack))
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min(stack)));
	// }