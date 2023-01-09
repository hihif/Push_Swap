/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:16 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:44:53 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_a(t_stack *a)
{
	int tmp;

	tmp = a->list->x;
	if (!a->list->next)
		return ;
	a->list->x = a->list->next->x;
	a->list->next->x = tmp;
	ft_printf("sa\n");
}