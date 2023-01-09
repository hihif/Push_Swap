/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:36:48 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/08 14:57:34 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print(t_stack *x)
{
	int i = 0;
	t_node *list;

	list = x->list;
	while (i < x->size)
	{
		printf("%d\n", list->x);
		list = list->next;
		i++;
	}
}

static	void	sort3(t_stack *a)
{
	while(!ft_check_if_sorted(a))
	{
		if (a->list->x < a->list->next->x)
		{
			ft_reverse_rotate_a(a);

		}
		else
		{
			ft_swap_a(a);
		}
	}
}

void	ft_rotate(t_stack *a, int rotations)
{
	while(rotations)
	{
		ft_rotate_a(a);
		rotations--;
	}
}

static	void	sort5(t_stack *a)
{
	t_stack *b;

	b = (t_stack *)malloc(sizeof(t_stack));
	while (a->size > 3)
	{
		ft_push_b(a, b);
	}
	sort3(a);
	while (b->size)
	{
		ft_rotate(a, ft_get_position(a, ft_get_max(a, b->list->x)));
		ft_push_a(a, b);
	}
	while(!ft_check_if_sorted(a))
	{
		ft_rotate(a, ft_get_position(a, ft_get_min(a)));
	}
}

int ft_get_max(t_stack *a, int nb)
{
	int max;
	t_node *head;

	max = ft_get_max_ina(a); 
	head = a->list;
	while (head)
	{
		if (head->x > nb && head->x < max)
			max = head->x;
		head = head->next;
	}
	if (nb > ft_get_max_ina(a))
		max = ft_get_min(a);
	return (max);
}

int	ft_get_max_ina(t_stack *a)
{
	t_node	*head;
	int min;

	head = a->list;
	min = head->x;
	while (head)
	{
		if (min < head->x)
			min = head->x;
		head = head->next;
	}
	return (min);
}

int	ft_get_min(t_stack *a)
{
	t_node	*head;
	int min;

	head = a->list;
	min = head->x;
	while (head)
	{
		if (min > head->x)
			min = head->x;
		head = head->next;
	}
	return (min);
}



int	main (int ac, char *av[])
{
	int i = 1;
	t_stack *a;
	a = (t_stack *)malloc(sizeof(t_stack));
	while (i < ac)
	{
		ft_lstback(&a->list, ft_newnode(ft_atoi(av[i])));
		i++;
	}
	a->size = ft_lsize(a->list);
	sort5(a);
	// printf("-------------------------------\n");
	// print(a);
	return (0);
}






















	

	// heada = NULL;
	// headb = NULL;
	// ft_lstback(&heada, ft_newnode(2));
	// ft_lstback(&heada, ft_newnode(1));
	// ft_lstback(&heada, ft_newnode(3));
	// ft_lstback(&heada, ft_newnode(6));
	// ft_lstback(&heada, ft_newnode(5));
	// ft_lstback(&heada, ft_newnode(8));
	// printf("head = %d\n", heada->x);
	// a = (t_stack *)malloc(sizeof(t_stack));
	// b = (t_stack *)malloc(sizeof(t_stack));
	// a->list = heada;
	// a->size = ft_lsize(a->list);
	// b->list = headb;
	// b->size = ft_lsize(b->list);
	// print(a);
	// printf("------------------\n");
	// print(b);
	// ft_swap_a(a);
	// ft_push_b(a, b);
	// ft_push_b(a, b);
	// ft_push_b(a, b);
	// ft_rotate_ab(a, b);
	// ft_reverse_rotate_ab(a, b);
	// ft_swap_a(a);
	// ft_push_a(a, b);
	// ft_push_a(a, b);
	// ft_push_a(a, b);
	// printf("after OP\n");
	// print(a);
	// printf("------------------\n");
	// print(b);

	// ft_push_a(a, b);
	// ft_printf("pa\n");
	// // printf("here %d  --  %d\n", a->list->x, a->list->next->next->x);
	// while (!ft_check_if_sorted(a))
	// {
	// 	if (a->list->x < a->list->next->next->x)
	// 	{
	// 		ft_swap_a(a);
	// 		ft_printf("sa\n");
	// 		// exit(0);
	// 	}
	// 	else if (a->list->x < a->list->next->next->next->x)
	// 	{
	// 		ft_swap_a(a);
	// 		ft_rotate_a(a);
	// 		ft_swap_a(a);
	// 		ft_reverse_rotate_a(a);
	// 		ft_printf("sa\nra\nsa\nrra\n");
	// 	}
	// 	else
	// 	{
	// 		ft_rotate_a(a);
	// 		ft_printf("rra\n");
	// 	}
	// }
	// ft_push_a(a, b);
	// ft_printf("pa\n");
	// while (!ft_check_if_sorted(a))
	// {
	// 	if (a->list->x < a->list->next->next->x)
	// 	{
	// 		ft_swap_a(a);
	// 		ft_printf("sa\n");
	// 	}
	// 	else if (a->list->x < a->list->next->next->next->x)
	// 	{
	// 		ft_swap_a(a);
	// 		ft_rotate_a(a);
	// 		ft_swap_a(a);
	// 		ft_reverse_rotate_a(a);
	// 		ft_printf("sa\nra\nsa\nrra\n");
	// 	}
	// 	else if (a->list->x < a->list->next->next->next->next->x)
	// 	{
	// 		ft_reverse_rotate_a(a);
	// 		ft_swap_a(a);
	// 		ft_rotate_a(a);
	// 		ft_rotate_a(a);
	// 		ft_printf("rra\nsa\nra\nrra\n");
	// 	}
	// 	else
	// 	{
	// 		ft_reverse_rotate_a(a);
	// 		ft_printf("rra\n");
	// 	}
	// }