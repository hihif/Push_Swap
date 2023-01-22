/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:15:41 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 03:57:10 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(t_stack *stack, char *msg)
{
	t_stack	*tmpstack;
	t_node	*tmpnode;

	tmpstack = (t_stack *)malloc(sizeof(t_stack));
	if (!tmpstack || stack->size < 2)
		return ;
	ft_push(tmpstack, ft_pop(stack));
	tmpnode = ft_pop(stack);
	ft_push(stack, ft_pop(tmpstack));
	ft_push(stack, tmpnode);
	ft_printf("%s", msg);
	free(tmpstack);
}

void	ft_swap_ab(t_stack *a, t_stack *b, char *msg)
{
	ft_swap(a, "");
	ft_swap(b, "");
	ft_printf("%s", msg);
}
