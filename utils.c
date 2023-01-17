/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:16:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/17 13:33:57 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_check_if_sorted(t_stack *stack)
{
	t_node *head;
	int max;

	head = stack->list;
	max = head->x;
	head = head->next;
	while (head)
	{
		if (max <= head->x)
			max = head->x;
		else 
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_get_position(t_stack *stack, int nb)
{
	int i;
	t_node *head;

	i = 1;
	head = stack->list;
	while(head)
	{
		if (head->x == nb)
			return (i);
		head = head->next;
		i++;
	}
	return (0);
}

t_stack	*ft_copy(t_stack *stack)
{
	t_stack *new;
	t_node *tmp1;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return NULL;
	new->size = stack->size;
	tmp1 = stack->list;
	while(tmp1)
	{
		ft_lstback(&new->list, ft_newnode(tmp1->x));
		tmp1 = tmp1->next;
	}
	return (new);
}

// void	ft_rotate_to_best(t_stack *stack)
// {
// 	t_best *best;

// 	best = ft_get_longesdt_sorted(stack);
// 	// printf("here the unrotated stack rotations = %d\n", best->rotate);
// 	ft_rotate(stack, best->rotate);
// 	ft_overwrite(stack->list, best->array);
// 	print(stack);
// 	puts("\nto here");
// 	free(best->array);
// }

int	ft_check_flags(t_node *list)
{
	t_node *head;

	head = list;
	while (head)
	{
		if (head->flag == 0)
			return (1);
		else 
			head = head->next;
	}
	return (0);
}