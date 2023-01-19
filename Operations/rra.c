/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:08 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/19 00:30:42 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_reverse_rotate_a(t_stack *a, char *msg)
{
	t_node	*last;
	if (a->size < 2)
		return ;

	last = ft_lastnode(&a->list);
	ft_NULLlast(a->list);
	ft_lstfront(&a->list, last);
	ft_printf("%s", msg);
}