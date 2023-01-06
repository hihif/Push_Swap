/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:36:48 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/06 19:58:27 by fhihi            ###   ########.fr       */
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

int	main (int ac, char *av[])
{
	int i = 1;
	// t_node *heada;
	t_stack *a;
	// printf("here  \n");
	a = (t_stack *)malloc(sizeof(t_stack));
	while (i < ac)
	{
		ft_lstback(&a->list, ft_newnode(ft_atoi(av[i])));
		i++;
	}
	a->size = ft_lsize(a->list);
	print(a);
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