/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:11 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/19 00:30:29 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_reverse_rotate_b(t_stack *b, char *msg)
{
	t_node	*last;
	if (b->size < 2)
		return ;

	last = ft_lastnode(&b->list);
	ft_NULLlast(b->list);
	ft_lstfront(&b->list, last);
	ft_printf("%s", msg);
}