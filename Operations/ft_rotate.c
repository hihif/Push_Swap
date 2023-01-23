/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:17:09 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 17:23:31 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../push_swap_bonus.h"

void	ft_rotate_stack(t_stack *stack, char *msg)
{
	t_node	*tmpnode;
	t_stack	*tmpstack;

	tmpstack = (t_stack *)malloc(sizeof(t_stack));
	if (!tmpstack || stack->size < 2)
		return ;
	tmpstack->size = 0;
	tmpnode = ft_pop(stack);
	while (stack->size)
		ft_push(tmpstack, ft_pop(stack));
	ft_push(stack, tmpnode);
	while (tmpstack->size)
		ft_push(stack, ft_pop(tmpstack));
	ft_printf("%s", msg);
	free(tmpstack);
}

void	ft_rotate_ab(t_stack *a, t_stack *b, char *msg)
{
	ft_rotate_stack(a, "");
	ft_rotate_stack(b, "");
	ft_printf("%s", msg);
}
