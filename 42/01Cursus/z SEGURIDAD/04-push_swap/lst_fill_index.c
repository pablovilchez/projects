/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fill_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:49:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/30 07:04:37 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

int	fill_index_loop(t_node **lst_a, t_node **lst_b, int num, int tot_size)
{
	t_node	*node;

	node = *lst_a;
	while (node)
	{
		if (node->num > num)
			tot_size--;
		node = node->next;
	}
	node = *lst_b;
	while (node)
	{
		if (node->num > num)
			tot_size--;
		node = node->next;
	}
	return (tot_size);
}

void	lst_fill_index(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		size_a;
	int		size_b;

	size_a = ft_lstsize(*lst_a);
	size_b = ft_lstsize(*lst_b);
	node = *lst_a;
	while (node)
	{
		node->index = fill_index_loop(lst_a, lst_b, node->num, size_a + size_b);
		node = node->next;
	}
	node = *lst_b;
	while (node)
	{
		node->index = fill_index_loop(lst_a, lst_b, node->num, size_a + size_b);
		node = node->next;
	}
}
