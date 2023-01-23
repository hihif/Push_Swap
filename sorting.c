/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:48:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 19:32:05 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort3(t_stack *stack)
{
	while (!ft_check_if_sorted(stack))
	{
		if (stack->list->x < stack->list->next->x)
			ft_reverse_rotate_stack(stack, "rra\n");
		else
			ft_swap(stack, "sa\n");
	}
}

void	sort5(t_stack *a)
{
	t_stack	*b;

	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
		return ;
	while (a->size > 3)
		ft_push_to(a, b, "pb\n");
	sort3(a);
	while (b->size)
	{
		ft_rotatea(a, ft_get_position(a, ft_get_min_max(a, b->list->x)) - 1);
		ft_push_to(b, a, "pa\n");
	}
	ft_rotatea(a, ft_get_position(a, ft_get_min(a)) - 1);
}

void	sort6plus(t_stack *a)
{
	t_stack	*b;

	b = (t_stack *)malloc(sizeof(t_stack));
	ft_push_to(a, b, "pb\n");
	ft_push_to(a, b, "pb\n");
	while (a->size)
	{
		ft_top(a);
		ft_right_inb(a, b);
		ft_total(a->list);
		ft_best_to_push(a, b);
		ft_tozero(a);
		ft_push_to(a, b, "pb\n");
	}
	ft_rotateb(b, ft_get_position(b, ft_get_min(b)));
	while (b->size)
		ft_push_to(b, a, "pa\n");
	free(b);
}

void	ft_sort(t_stack *a)
{
	if (ft_check_if_sorted(a))
		return ;
	if (a->size < 4)
		sort3(a);
	else if (a->size < 6)
		sort5(a);
	else
		sort6plus(a);
}
