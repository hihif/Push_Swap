/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:32:31 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 04:43:52 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// this is an emplamentation of a simple atoi
long	ft_myatoi(char *str)
{
	long	i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 1;
	if (str[i[0]] == '-' || str[i[0]] == '+')
	{
		if (str[i[0]] == '-')
			i[2] = -1;
		i[0]++;
	}
	ft_iferror(i[1] * i[2], str[i[0]]);
	while (str[i[0]])
	{
		if (!ft_isdigit(str[i[0]]))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i[1] = i[1] * 10 + str[i[0]++] - '0';
	}
	ft_iferror(i[1] * i[2], 50);
	return (i[1] * i[2]);
}

// this function checks if the number is in range of INT
void	ft_iferror(long nb, char c)
{
	if (!ft_isdigit(c))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (nb > 2147483647 || nb < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	ft_nulllast(t_node *list)
{
	while (list->next->next)
		list = list->next;
	list->next = NULL;
}
