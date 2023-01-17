#include"push_swap.h"

int	ft_get_position(t_stack *stack, int nb)
{
	int i;
	t_node *head;

	i = 0;
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

void	ft_top(t_stack *stack)
{
	t_node *head;
	int i = 0;
	head = stack->list;
	while (i <= stack->size / 2)
	{
		head->price.ra = i;
		head = head->next;
		i++;
	}
	i--;
	while (i > 0)
	{
		head->price.rra = i;
		head = head->next;
		i--;
	}
}

void	ft_right_inb(t_node *list, t_stack *b)
{
	int max, min, i;
	t_node *head;

	head = list;
	while (head)
	{
		i = ft_get_position(b, ft_get_min_max(b, head->x));
		while (i > 0)
		{
			if (i > b->size / 2)
				head->price.rrb++;
			else
				head->price.rb++;
			i--;
		}
		head = head->next;
	}
}

int main (int ac, char **av)
{
	int i = 1;
	t_stack *a;
	a = (t_stack *)malloc(sizeof(t_stack));
	while (i < ac)
	{
		ft_lstback(&a->list, ft_newnode(atoi(av[i])));
		i++;
	}
	a->size = ac - 1;
	t_node *head = a->list;
}