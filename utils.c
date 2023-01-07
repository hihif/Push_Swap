/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:16:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/07 13:45:41 by fhihi            ###   ########.fr       */
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
		if (max < head->x)
			max = head->x;
		else 
			return (0);
		head = head->next;
	}
	return (1);
}