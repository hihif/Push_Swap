/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:16:39 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/22 18:32:53 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../push_swap_bonus.h"

void	ft_push_to(t_stack *src, t_stack *dst, char *msg)
{
	ft_push(dst, ft_pop(src));
	ft_printf("%s", msg);
}
