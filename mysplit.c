/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysplit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:02:45 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/19 22:10:38 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
