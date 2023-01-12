/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:21 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 21:08:22 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_ab(t_stack *a, t_stack *b, char *msg)
{
	int tmp1;
	int tmp;

	tmp1 = a->list->x;
	tmp = b->list->x;
	if (!b->list || !b->list->next || !a->list->next)
		return ;
	a->list->x = a->list->next->x;
	a->list->next->x = tmp1;
	b->list->x = b->list->next->x;
	b->list->next->x = tmp;
	ft_printf("%s", msg);
}