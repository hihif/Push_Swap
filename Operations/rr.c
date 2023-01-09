/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:19:58 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_ab(t_stack *a, t_stack *b)
{
	t_node	*list1;
	t_node	*list;

	list1 = a->list;
	list = b->list;
	list1->next = NULL;
	list->next = NULL;
	a->list = a->list->next;
	ft_lstback(&a->list, list1);
	b->list = b->list->next;
	ft_lstback(&b->list, list);
	ft_printf("rr\n");
}