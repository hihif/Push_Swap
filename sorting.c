/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:48:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 22:33:14 by fhihi            ###   ########.fr       */
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
	ft_rotate_to_best(stack);
	while (ft_check_flags(stack->list))
	{
		if (stack->list->flag == 0)
			ft_push_b(stack, b, "pb\n");
		else
			ft_rotate_a(stack, "ra\n");
	}
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