/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:10:57 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 21:08:54 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_push_b(t_stack *a, t_stack *b, char *msg)
{
	t_node *node;
	node = a->list;
	if (!node)
		return ;
	a->list = a->list->next;
	node->next = b->list;
	b->list = node;
	b->size++;
	a->size--;
	ft_printf("%s", msg);
}