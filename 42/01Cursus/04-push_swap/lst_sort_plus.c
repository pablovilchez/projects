/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sort_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:00:01 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/05 19:37:12 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	lst_order(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		moves;

	node = *lst_a;
	moves = 0;
	while (node->index != 1)
	{
		moves++;
		node = node->next;
	}
	if (moves != 0)
	{
		while (moves > 0)
		{
			rotate(lst_a, lst_b, 'a');
			moves--;
		}
		while (moves < 0)
		{
			reverse(lst_a, lst_b, 'a');
			moves++;
		}
	}
}

void	exec_moves(t_node **lst_a, t_node **lst_b, int mov_a, int mov_b)
{
	while (mov_a != 0)
	{
		if (mov_a > 0)
		{
			mov_b -= rotate_a(lst_a, lst_b, mov_b);
			mov_a--;
		}
		if (mov_a < 0)
		{
			mov_b += reverse_a(lst_a, lst_b, mov_b);
			mov_a++;
		}
	}
	while (mov_b != 0)
	{
		if (mov_b > 0)
			mov_b -= rotate_b(lst_a, lst_b);
		if (mov_b < 0)
			mov_b += reverse_b(lst_a, lst_b);
	}
	push(lst_a, lst_b, 'a');
}

int	lst_select_node(t_node **lst)
{
	t_node	*node;
	int		total_cost;
	int		best;

	node = *lst;
	best = 1;
	total_cost = abs(node->cost_a) + abs(node->cost_b);
	node = node->next;
	while (node)
	{
		if ((abs(node->cost_a) + abs(node->cost_b)) < total_cost)
		{
			total_cost = abs(node->cost_a) + abs(node->cost_b);
			best = node->pos;
		}
		node = node->next;
	}
	return (best);
}

void	push_to_b(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		total_a;
	int		count_total;
	int		count_half;

	total_a = ft_lstsize(*lst_a);
	count_total = total_a;
	count_half = total_a / 2;
	while (count_total > 3 && count_half > 0)
	{
		node = *lst_a;
		if (node->index <= total_a / 2)
		{
			push(lst_a, lst_b, 'b');
			count_total--;
			count_half--;
		}
		else
			rotate(lst_a, lst_b, 'a');
	}
	while (count_total > 3)
	{
		push(lst_a, lst_b, 'b');
		count_total--;
	}
}

void	lst_sort_plus(t_node **lst_a, t_node **lst_b)
{
	int		node_pos;
	t_node	*node;

	push_to_b(lst_a, lst_b);
	lst_fill_stats(lst_a, lst_b);
	if (!is_sorted(lst_a, NULL))
		lst_sort_three(lst_a, lst_b);
	while (ft_lstsize(*lst_b) > 0)
	{
		lst_fill_stats(lst_a, lst_b);
		node_pos = lst_select_node(lst_b);
		node = *lst_b;
		while (node->pos != node_pos)
			node = node->next;
		exec_moves(lst_a, lst_b, node->cost_a, node->cost_b);
	}
	lst_order(lst_a, lst_b);
}
