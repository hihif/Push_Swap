/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:10:53 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:16:39 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_push_a(t_stack *a, t_stack *b)
{
	t_node *node;
	node = b->list;
	if (!node)
		return ;
	b->list = b->list->next;
	node->next = a->list;
	a->list = node;
	a->size++;
	b->size--;
	ft_printf("pa\n");
}