/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:03 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/18 23:48:27 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_b(t_stack *b, char *msg)
{
	t_node	*list;
	list = b->list;
	b->list = b->list->next;
	list->next = NULL;
	ft_lstback(&b->list, list);
	ft_printf("%s", msg);
}