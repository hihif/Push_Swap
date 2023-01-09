/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:21 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:45:20 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_ab(t_stack *a, t_stack *b)
{
	int tmp1;
	int tmp;

	tmp1 = a->list->x;
	tmp = b->list->x;
	if (!a->list->next)
		return ;
	a->list->x = a->list->next->x;
	a->list->next->x = tmp1;
	if (!b->list->next)
		return ;
	b->list->x = b->list->next->x;
	b->list->next->x = tmp;
	ft_printf("ss\n");
}