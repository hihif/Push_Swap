/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 21:08:28 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_b(t_stack *b, char *msg)
{
	int tmp;

	tmp = b->list->x;
	if (!b->list || !b->list->next)
		return ;
	b->list->x = b->list->next->x;
	b->list->next->x = tmp;
	ft_printf("%s", msg);
}