#include"push_swap.h"

// calculates nmber of rotation for each value to get to top
// and sets it to struct

// void	ft_top(t_stack *stack)
// {
// 	t_node *head;
// 	int i = 0;
// 	head = stack->list;
// 	while (i <= stack->size / 2)
// 	{
// 		head->price.ra = i;
// 		head = head->next;
// 		i++;
// 	}
// 	if (!(stack->size % 2))
// 		i--;
// 	i--;
// 	while (i > 0)
// 	{
// 		head->price.rra = i;
// 		head = head->next;
// 		i--;
// 	}
// }

// void	ft_right_inb(t_stack *a, t_stack *b)
// {
// 	int max, min, i;
// 	t_node *head;

// 	head = a->list;
// 	while (head)
// 	{
// 		i = ft_get_position(b, ft_get_min_max(b, head->x));
// 		while (i > 0)
// 		{
// 			if (i > b->size / 2)
// 			{
// 				i = b->size - i;
// 				while (i > 0)
// 				{
// 					head->price.rrb++;
// 					i--;     
// 				}
// 			}
// 			else
// 				head->price.rb++;
// 			i--;
// 		}
// 		head = head->next;
// 	}
// }

// void	ft_total(t_node *list)
// {
// 	while(list->price.ra && list->price.rb)
// 	{
// 		list->price.rr++;
// 		list->price.ra--;
// 		list->price.rb--;
// 	}
// 	while(list->price.rra && list->price.rrb)
// 	{
// 		list->price.rrr++;
// 		list->price.rra--;
// 		list->price.rrb--;
// 	}
// 	list->tot = list->price.ra + list->price.rb + list->price.rr + list->price.rra + list->price.rrb + list->price.rrr;
// }

int main (int ac, char **av)
{
	int i = 1;
	t_stack *a;
	t_stack *b;
	a = (t_stack *)malloc(sizeof(t_stack));
	b = (t_stack *)malloc(sizeof(t_stack));
	while (i < ac)
	{
		ft_lstback(&a->list, ft_newnode(atoi(av[i])));
		a->size++;
		i++;
	}
	// ft_push_b(a, b, "");
	// ft_push_b(a, b, "");
	// ft_push_b(a, b, "");
	// ft_push_b(a, b, "");
	// ft_push_b(a, b, "");
	// ft_swap_a(a, "");
	// printf("2 here %d", a->size);
	// ft_top(a);
	// ft_right_inb(a, b);
	// t_node *head = a->list->next->next->next->next->next;

	// print(a);
	// puts("----------------");
	sort5(a);
}