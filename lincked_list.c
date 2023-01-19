/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lincked_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:33:43 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/18 23:45:36 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_lsize(t_node *list)
{
	int length;
	
	length = 1;
	if (!list)
		return (0);
	while (list->next)
	{
		length++;
		list = list->next;
	}
	return (length);
}

t_node	*ft_lastnode(t_node **list)
{
	t_node *head;

	head = *list;
	while (head->next)
		head = head->next;
	return (head);
}

void	ft_lstfront(t_node **list, t_node *node)
{
	node->next = *list;
	*list = node;
}

void	ft_lstback(t_node **list, t_node *node)
{
	t_node	*current;
	current = *list;
	if (!*list)
	{
		*list = node;
	}
	else
	{
		current = ft_lastnode(&current);
		current->next = node;
	}
	
}

t_node	*ft_newnode(int x)
{
	t_node *new;
	
	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->x = x;
	new->next = NULL;
	return (new);
}

void	ft_NULLlast(t_node *list)
{
	while (list->next->next)
		list = list->next;
	list->next = NULL;
}