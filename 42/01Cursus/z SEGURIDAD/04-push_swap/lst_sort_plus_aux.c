/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sort_plus_aux.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 01:28:41 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/01 20:09:18 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

int	rotate_a(t_node **lst_a, t_node **lst_b, int mov_b)
{
	if (mov_b > 0)
	{
		rotate(lst_a, lst_b, 'r');
		return (1);
	}
	else
	{
		rotate(lst_a, lst_b, 'a');
		return (0);
	}
}

int	reverse_a(t_node **lst_a, t_node **lst_b, int mov_b)
{
	if (mov_b < 0)
	{
		reverse(lst_a, lst_b, 'r');
		return (1);
	}
	else
	{
		reverse(lst_a, lst_b, 'a');
		return (0);
	}
}

int	rotate_b(t_node **lst_a, t_node **lst_b)
{
	rotate(lst_a, lst_b, 'b');
	return (1);
}

int	reverse_b(t_node **lst_a, t_node **lst_b)
{
	reverse(lst_a, lst_b, 'b');
	return (1);
}
