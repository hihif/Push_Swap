/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:28:55 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/23 08:42:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	ft_read_operations(t_stack *a, t_stack *b)
{
	char *instructions;

	while (1)
	{
		instructions = get_next_line(0);
		if (ft_strlen2(instructions) == 3)
			instructions[2] = '\0';
		else if (ft_strlen2(instructions) == 4)
			instructions[3] = '\0';
		check_op(a, b, instructions);
		free(instructions);
		if (!instructions)
			break;
	}
}

void	ft_do_operations(t_stack *a)
{
	t_stack *b;

	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
		return ;
	ft_read_operations(a, b);
	ft_myfree(b);
	if (!ft_check_if_sorted(a))
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
}
void	check_op(t_stack *a, t_stack *b, char *op)
{
	if (!op)
		return ;
	if (!ft_strncmp(op, "ra", 3))
		ft_rotate_stack(a, "");
	else if (!ft_strncmp(op, "rb", 3))
		ft_rotate_stack(b, "");
	else if (!ft_strncmp(op, "rr", 3))
		ft_rotate_ab(a, b, "");
	else if (!ft_strncmp(op, "rra", 4))
		ft_reverse_rotate_stack(a, "");
	else if (!ft_strncmp(op, "rrb", 4))
		ft_reverse_rotate_stack(b, "");
	else if (!ft_strncmp(op, "rrr", 4))
		ft_reverse_rotate_ab(a, b, "");
	else if (!ft_strncmp(op, "sa", 3))
		ft_swap(a, "");
	else if (!ft_strncmp(op, "sb", 3))
		ft_swap(b, "");
	else if (!ft_strncmp(op, "ss", 3))
		ft_swap_ab(a, b, "");
	else if (!ft_strncmp(op, "pa", 3))
		ft_push_to(b, a, "");
	else if (!ft_strncmp(op, "pb", 3))
		ft_push_to(a, b, "");
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}
