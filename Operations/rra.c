/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:08 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/06 13:26:56 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_reverse_rotate_a(t_stack *a)
{
	t_node	*last;

	last = ft_lastnode(&a->list);
	ft_NULLlast(a->list);
	ft_lstfront(&a->list, last);
}