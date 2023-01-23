/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:02:18 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 18:32:48 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../push_swap_bonus.h"

void	ft_push(t_stack *stack, t_node *node)
{
	if (!node)
		return ;
	node->next = stack->list;
	stack->list = node;
	stack->size++;
}
