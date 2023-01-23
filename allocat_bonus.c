/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocat_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:01:15 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 17:01:23 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

t_stack	*ft_allocat(int len, char **av)
{
	t_stack	*a;
	int		i;

	i = len - 1;
	a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	while (i >= 0)
		ft_push(a, ft_newnode(ft_myatoi(av[i--])));
	return (a);
}

void	ft_myfree(t_stack *stack)
{
	t_node	*head;
	t_node	*tmp;

	head = stack->list;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
