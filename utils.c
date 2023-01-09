/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:16:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 14:52:11 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_check_if_sorted(t_stack *a)
{
	t_node *head;
	int max;

	head = a->list;
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

int	ft_get_position(t_stack *a, int nb)
{
	int i;
	t_node *head;
	i = 0;

	head = a->list;
	// while(i < a->size)
	// {
	// 	head->pos = i;
	// 	head = head->next;
	// 	i++;
	// }
	// i = 0;
	// head = a->list;
	while(head)
	{
		if (head->x == nb)
			return (i);
		head = head->next;
		i++;
	}
	return (0);
}