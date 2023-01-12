/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:13 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 21:08:35 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_reverse_rotate_ab(t_stack *a, t_stack *b, char *msg)
{
	t_node	*last1;
	t_node	*last;

	last1 = ft_lastnode(&a->list);
	last = ft_lastnode(&b->list);
	ft_NULLlast(a->list);
	ft_lstfront(&a->list, last1);

	ft_NULLlast(b->list);
	ft_lstfront(&b->list, last);
	ft_printf("%s", msg);
}