/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:02:03 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/23 08:42:32 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../push_swap_bonus.h"

t_node	*ft_pop(t_stack *stack)
{
	t_node	*head;

	if (!stack->size)
		return (NULL);
	head = stack->list;
	stack->list = stack->list->next;
	head->next = NULL;       
	stack->size--;
	return (head);
}
