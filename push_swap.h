/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:06:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/01/05 11:36:30 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

# include"libftprintf/ft_printf.h"
# include"libftprintf/libft.h"

typedef struct s_node
{
	int 	x;
	struct s_node	*next;
}	t_node;

typedef	struct s_stack
{
	t_node	*node;
	int 	size;
}	t_stack;

void	swap_a(t_stack *a);

#endif 
