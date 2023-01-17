/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   QSort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:35:04 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/12 13:35:16 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	deviding(int *a, int s, int e)
{
	int pivot = a[e];
	int pi = s;
	int tmp;
	int i;

	i = s;
	while (i < e)
	{
		if (a[i] <= pivot)
		{
			tmp = a[i];
			a[i] = a[pi];
			a[pi] = tmp;
			pi++;
		}
		i++;
	}
	tmp = a[e];
	a[e] = a[pi];
	a[pi] = tmp;
	return (pi);
}

void	QSort(int *a, int s, int e)
{
	if (s < e)
	{
		int p = deviding(a, s, e);
		QSort(a, s, p - 1);
		QSort(a, p + 1, e);
	}
}
