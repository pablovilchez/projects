/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 04:06:56 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/10 15:12:39 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftchecker.h"

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

int	check_order(t_node **lst_a, t_node **lst_b, char *order)
{
	if (ft_strncmp(order, "pa\n", 4) == 0)
		push(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "pb\n", 4) == 0)
		push(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "ra\n", 4) == 0)
		rotate(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "rb\n", 4) == 0)
		rotate(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "rr\n", 4) == 0)
		rotate(lst_a, lst_b, 'r');
	else if (ft_strncmp(order, "sa\n", 4) == 0)
		swap(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "sb\n", 4) == 0)
		swap(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "ss\n", 4) == 0)
		swap(lst_a, lst_b, 's');
	else if (ft_strncmp(order, "rra\n", 4) == 0)
		reverse(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "rrb\n", 4) == 0)
		reverse(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "rrr\n", 4) == 0)
		reverse(lst_a, lst_b, 'r');
	else
		return (1);
	return (0);
}

void	checker(t_node **lst_a, t_node **lst_b)
{
	char	*order;
	int		error;

	error = 0;
	order = ft_get_next_line(0);
	while (order)
	{
		if (check_order(lst_a, lst_b, order))
			error = 1;
		order = ft_get_next_line(0);
	}
	if (error)
		ft_printf("Error\n");
	else if (is_sorted(lst_a, lst_b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free(order);
}
