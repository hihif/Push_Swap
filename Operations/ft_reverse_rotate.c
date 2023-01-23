/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:23:26 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 18:18:27 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../push_swap_bonus.h"

void	ft_reverse_rotate_stack(t_stack *stack, char *msg)
{
	t_node	*tmpnode;
	t_stack	*tmpstack;

	tmpstack = (t_stack *)malloc(sizeof(t_stack));
	if (!tmpstack)
		return ;
	tmpstack->size = 0;
	while (stack->size > 1)
		ft_push(tmpstack, ft_pop(stack));
	tmpnode = ft_pop(stack);
	while (tmpstack->size)
		ft_push(stack, ft_pop(tmpstack));
	ft_push(stack, tmpnode);
	ft_printf("%s", msg);
	free(tmpstack);
}

void	ft_reverse_rotate_ab(t_stack *a, t_stack *b, char *msg)
{
	ft_reverse_rotate_stack(a, "");
	ft_reverse_rotate_stack(b, "");
	ft_printf("%s", msg);
}
