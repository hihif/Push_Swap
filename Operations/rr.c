/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:11:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/18 23:54:32 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_ab(t_stack *a, t_stack *b, char *msg)
{
	t_node	*list1;
	t_node	*list;

	list1 = a->list;
	list = b->list;
	
	
	a->list = a->list->next;
	list1->next = NULL;
	ft_lstback(&a->list, list1);
	
	b->list = b->list->next;
	list->next = NULL;
	ft_lstback(&b->list, list);
	
	ft_printf("%s", msg);
}
// int main (int ac, char **av)
// {
// 	int i = 1;
// 	t_stack *a;
// 	t_stack *b;
// 	a = (t_stack *)malloc(sizeof(t_stack));
// 	b = (t_stack *)malloc(sizeof(t_stack));
// 	while (i < ac)
// 	{
// 		ft_lstback(&a->list, ft_newnode(atoi(av[i])));
// 		a->size++;
// 		i++;
// 	}
// 	ft_push_b(a, b, "pb\n");
// 	ft_push_b(a, b, "pb\n");
// 	ft_push_b(a, b, "pb\n");
// 	puts("----------------");
// 	print(a);
// 	puts("----------------");
// 	print(b);
// 	ft_rotate_ab(a, b, "rr\n");
// 	puts("----------------");
// 	print(a);
// 	puts("----------------");
// 	print(b);
// }