/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 04:06:56 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/01 21:02:08 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

size_t	is_sorted(t_node **lst_a, t_node **lst_b)
{
	t_node	*node_a;
	t_node	*node_b;
	int		num;

	node_a = *lst_a;
	if (lst_b)
		node_b = *lst_b;
	if (node_b == NULL)
	{
		while (node_a)
		{
			num = node_a->num;
			node_a = node_a->next;
			if (node_a)
			{
				if (num > node_a->num)
					return (0);
			}
		}
		return (1);
	}
	return (0);
}

void	checker(t_node **lst_a, t_node **lst_b)
{
	ft_printf("%i", is_sorted(lst_a, lst_b));
}
