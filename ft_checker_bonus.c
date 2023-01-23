/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:43:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 19:06:22 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	ft_many(int ac, char *av[])
{
	t_stack	*a;
	int		len;
	int		*tab;
	char	**strs;

	strs = &av[1];
	len = ac - 1;
	tab = ft_error(len, strs); 
	a = ft_allocat(len, strs);
	ft_do_operations(a);
	free(tab);
	ft_myfree(a);
}

void	ft_one(char *av[])
{
	char	**strs;
	int		len;
	int		*tab;
	t_stack	*a;

	len = ft_count(av[1], ' ');
	strs = ft_mysplit(av[1], ' ');
	tab = ft_error(len, strs);
	a = ft_allocat(len, strs);
	ft_do_operations(a);
	while (len >= 0)
		free(strs[len--]);
	free(strs);
	free(tab);
	ft_myfree(a);
}

int	*ft_error(int len, char *av[])
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(len * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = ft_myatoi(av[i]);
		i++;
	}
	check_double(tab, len);
	return (tab);
}

void	check_double(int *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
			{
				write(2, "Error\n", 6);
				free(tab);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		if (ac > 2)
			ft_many(ac, av);
		else
			ft_one(av);
	}
	return (0);
}