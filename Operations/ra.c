/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:00 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:18:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_a(t_stack *a)
{
	t_node	*list;
	list = a->list;
	a->list = a->list->next;
	list->next = NULL;
	ft_lstback(&a->list, list);
	ft_printf("ra\n");
}