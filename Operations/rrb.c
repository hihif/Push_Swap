/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:11 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 13:22:16 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_reverse_rotate_b(t_stack *b)
{
	t_node	*last;

	last = ft_lastnode(&b->list);
	ft_NULLlast(b->list);
	ft_lstfront(&b->list, last);
	ft_printf("rrb\n");
}