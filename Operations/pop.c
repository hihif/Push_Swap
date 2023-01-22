/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:02:03 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 04:43:58 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

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

void	print(t_stack *x)
{
	int i = 0;
	t_node *list;

	list = x->list;
	while (i < x->size)
	{
		ft_printf("val = %d\n", list->x);
		list = list->next;
		i++;
	}
}
