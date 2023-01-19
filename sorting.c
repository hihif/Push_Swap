/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:48:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/19 00:31:47 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort3(t_stack *stack)
{
	while(!ft_check_if_sorted(stack))
	{
		if (stack->list->x < stack->list->next->x)
		{
			ft_reverse_rotate_a(stack, "rra\n");

		}
		else
		{
			ft_swap_a(stack, "sa\n");
		}
	}
}

void	sort5(t_stack *stack)
{
	t_stack *b;
	int i = 1, n = 8;

	b = (t_stack *)malloc(sizeof(t_stack));
	ft_push_b(stack, b, "pb\n");
	ft_push_b(stack, b, "pb\n");
	while (stack->size)
	{
		ft_top(stack);
		// printf("1 here  %d\n", stack->size);
		ft_right_inb(stack, b);
		ft_total(stack->list);
		ft_best_to_push(stack, b);
		ft_tozero(stack);
		ft_push_b(stack, b, "pb\n");
	}
	ft_rotate(b, ft_get_position(b, ft_get_min(b)));
	// print(b);
	// puts("---------");
	while (b->size)
	{
		// printf("here b->size = %d\n", b->size);
		ft_reverse_rotate_b(b, "rrb\n");
		ft_push_a(stack, b, "pa\n");
	}
	print(stack);
}

int	ft_get_chunk(t_stack *stack)
{
	t_node *head;
	int arr[stack->size];
	int i;

	i = 0;
	head = stack->list;
	while (i < stack->size)
	{
		arr[i] = head->x;
		head = head->next;
		i++;
	}
	QSort(arr, 0, i - 1);
	return (arr[i / 2]);
}

// this function sets evrything in its place so that i can start pushing
void	ft_best_to_push(t_stack *a, t_stack *b)
{
	t_node *head;
	t_node *node;
	int min;

	head = a->list;
	min = head->tot;
	node = head;
	while(head)
	{
		if (head->tot < min)
		{
			min = head->tot;
			node = head;
		}
		head = head->next;
	}
	while (node->price.ra || node->price.rb || node->price.rr || node->price.rra || node->price.rrb || node->price.rrr)
	{
		if (node->price.ra)
		{
			ft_rotate_a(a, "ra\n");
			node->price.ra--;
		}
		if (node->price.rb)
		{
			ft_rotate_b(b, "rb\n");
			node->price.rb--;
		}
		if (node->price.rr)
		{
			ft_rotate_ab(a, b, "rr\n");
			node->price.rr--;
		}
		if (node->price.rra)
		{
			ft_reverse_rotate_a(a, "rra\n");
			node->price.rra--;
		}
		if (node->price.rrb)
		{
			ft_reverse_rotate_b(b, "rrb\n");
			node->price.rrb--;
		}
		if (node->price.rrr)
		{
			ft_reverse_rotate_ab(a, b, "rrr\n");
			node->price.rrr--;
		}
	}
	// printf("number %d total %d\n", node->x, node->price.rb);
}

void	ft_tozero(t_stack *a)
{
	t_node *head;

	head = a->list;
	while (head)
	{
		head->price.ra = 0;
		head->price.rb = 0;
		head->price.rr = 0;
		head->price.rra = 0;
		head->price.rrb = 0;
		head->price.rrr = 0;
		head->tot = 0;
		head = head->next;
	}
}



























	// while (stack->size > 3)
	// {
	// 	ft_push_b(stack, b, "pb\n");
	// }
	// sort3(stack);
	// while (b->size)
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min_max(stack, b->list->x)));
	// 	ft_push_a(stack, b, "pa\n");
	// }
	// while(!ft_check_if_sorted(stack))
	// {
	// 	ft_rotate(stack, ft_get_position(stack, ft_get_min(stack)));
	// }