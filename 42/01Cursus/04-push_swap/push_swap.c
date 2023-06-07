/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 04:06:56 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/06 17:16:41 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	lst_sort_three(t_node **lst_a, t_node **lst_b)
{
	t_node	*node;
	int		a;
	int		b;
	int		c;

	node = *lst_a;
	a = node->num;
	node = node->next;
	b = node->num;
	node = node->next;
	c = node->num;
	if ((a < b && a < c) || (a < b && a > c))
	{
		reverse(lst_a, lst_b, 'a');
		if (a < b && a < c)
			swap(lst_a, lst_b, 'a');
	}
	else if (a > b && a > c)
	{
		rotate(lst_a, lst_b, 'a');
		if (b > c)
			swap(lst_a, lst_b, 'a');
	}
	else
		swap(lst_a, lst_b, 'a');
}

void	lst_sort_two(t_node **lst_a, t_node **lst_b)
{
	swap(lst_a, lst_b, 'a');
}

size_t	is_sorted(t_node **lst_a, t_node **lst_b)
{
	t_node	*node_a;
	t_node	*node_b;
	int		num;

	node_a = *lst_a;
	node_b = NULL;
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

void	push_swap(t_node **lst_a, t_node **lst_b)
{
	int	lst_size;

	lst_size = ft_lstsize(*lst_a);
	if (!is_sorted(lst_a, lst_b))
	{
		lst_fill_index(lst_a, lst_b);
		if (lst_size == 2)
			lst_sort_two(lst_a, lst_b);
		else if (lst_size == 3)
			lst_sort_three(lst_a, lst_b);
		else if (lst_size > 3)
			lst_sort_plus(lst_a, lst_b);
	}
}
