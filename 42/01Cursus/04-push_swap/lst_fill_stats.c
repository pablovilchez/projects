/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fill_stats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:25:17 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/05 19:31:28 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

int	max_index(t_node **lst_a)
{
	t_node	*node;
	int		max;

	node = *lst_a;
	max = node->index;
	while (node)
	{
		if (node->index > max)
			max = node->index;
		node = node->next;
	}
	return (max);
}

int	fill_cost(int pos, int size)
{
	int	half;

	if (size % 2 == 0)
		half = size / 2;
	else
		half = (size / 2) + 1;
	if (pos <= half)
		return (pos - 1);
	else
		return (pos - size - 1);
}

int	fill_target(t_node **lst_a, int index)
{
	t_node	*node;
	int		dif;
	int		found;

	dif = 1;
	found = 0;
	if (index > max_index(lst_a))
		index = 0;
	while (found == 0)
	{

		node = *lst_a;
		while (node && found == 0)
		{
			if (node->index - dif == index)
				found = 1;
			else
				node = node->next;
		}
		dif++;
	}
	return (node->pos);
}

void	fill_pos(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		pos;

	pos = 1;
	node = *lst_a;
	while (node)
	{
		node->pos = pos;
		pos++;
		node = node->next;
	}
	pos = 1;
	node = *lst_b;
	while (node)
	{
		node->pos = pos;
		pos++;
		node = node->next;
	}
}

void	lst_fill_stats(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		size_a;
	int		size_b;

	size_a = ft_lstsize(*lst_a);
	size_b = ft_lstsize(*lst_b);
	fill_pos(lst_a, lst_b);
	node = *lst_a;
	while (node)
	{
		node->target_pos = 0;
		node->cost_a = 0;
		node->cost_b = 0;
		node = node->next;
	}
	node = *lst_b;
	while (node)
	{
		node->target_pos = fill_target(lst_a, node->index);
		node->cost_a = fill_cost(node->target_pos, size_a);
		node->cost_b = fill_cost(node->pos, size_b);
		node = node->next;
	}
}
