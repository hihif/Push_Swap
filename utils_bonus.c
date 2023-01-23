/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:13:40 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 16:47:45 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

// it checkes if the stack is sorted
int	ft_check_if_sorted(t_stack *stack)
{
	t_node	*head;
	int		max;

	head = stack->list;
	max = head->x;
	head = head->next;
	while (head)
	{
		if (max <= head->x)
			max = head->x;
		else
			return (0);
		head = head->next;
	}
	return (1);
}

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
			exit(1);
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
		exit(1);
	}
	if (nb > 2147483647 || nb < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	i1;
	int	count;

	i = 0;
	i1 = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && i1 == 0)
		{
			count++;
			i1 = 1;
		}
		else if (s[i] == c)
			i1 = 0;
		i++;
	}
	return (count);
}

char	**ft_mysplit(char const *s, char c)
{
	char	**new;
	int		i[3];

	if (!s)
		return (NULL);
	new = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	i[2] = -1;
	while (i[0] <= (int)ft_strlen(s))
	{
		if ((s[i[0]] != c || s[i[0]] == '\0') && i[2] < 0)
			i[2] = i[0];
		else if ((s[i[0]] == c || s[i[0]] == '\0') && i[2] >= 0)
		{
			new[i[1]++] = ft_substr(s, i[2], i[0] - i[2]);
			i[2] = -1;
		}
		i[0]++;
	}
	new[i[1]] = NULL;
	return (new);
}