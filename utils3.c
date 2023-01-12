/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:51:07 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/11 22:30:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_count_flags(t_node *list)
{
	t_node *head;
	int count;
	count = 0;
	head = list;
	while (head)
	{
		if (head->flag == 1)
			count++;
		head = head->next;
	}
	return (count);
}

void	ft_overwrite(t_node *list, int *array)
{
	while (list)
	{
		list->flag = *array;
		array++;
		list = list->next;
	}
}

int	ft_set_flags(t_node *list, int *arr)
{
	int count;
	int i;
	int max;

	i = 1;
	count = 1;
	arr[0] = 1;
	max = list->x;
	list = list->next;
	while (list)
	{
		if (max < list->x)
		{
			max = list->x;
			arr[i] = 1;
			count++;
		}
		else
			arr[i] = 0;
		i++;
		list = list->next;
	}
	return (count);
}

void	ft_new_arr(int *new, int *old, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		old[i] = new[i];
		i++;
	}
}

t_best	*ft_get_longest_sorted(t_stack *stack)
{
	t_best *new;
	t_stack *copy;
	t_node *head;
	int i;
	int count;
	int rotate;
	int newcount;
	int *array1;
	int *array2;

	new = (t_best *)malloc(sizeof(t_best));
	array1 = (int *)malloc(stack->size * sizeof(int));
	array2 = (int *)malloc(stack->size * sizeof(int));
	if (!array1 || !array2 || !new)
		return NULL;
	copy = ft_copy(stack);
	i = 0;
	count = 0;
	rotate = 0;
	while (i < copy->size)
	{
		if (i != 0)
			ft_rotate_a(copy, "");
		head = copy->list;
		newcount = ft_set_flags(head, array2);
		printf("count = %d\n", newcount);
		if (count < newcount)
		{
			ft_new_arr(array2, array1, copy->size);
			rotate++;
			count = newcount;
		}
		printf("next set starts here\n");
		i++;
	}
	new->rotate = rotate - 1;
	new->array = array1;
	free(array2);
	return (new);
}
