/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 04:06:56 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/06 18:11:11 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftchecker.h"

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

int	check_order(t_node **lst_a, t_node **lst_b, char *order)
{
	if (ft_strncmp(order, "pa", 4))
		push(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "pb", 4))
		push(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "ra", 4))
		rotate(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "rb", 4))
		rotate(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "rr", 4))
		rotate(lst_a, lst_b, 'r');
	else if (ft_strncmp(order, "sa", 4))
		swap(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "sb", 4))
		swap(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "ss", 4))
		swap(lst_a, lst_b, 's');
	else if (ft_strncmp(order, "rra", 4))
		reverse(lst_a, lst_b, 'a');
	else if (ft_strncmp(order, "rrb", 4))
		reverse(lst_a, lst_b, 'b');
	else if (ft_strncmp(order, "rrr", 4))
		reverse(lst_a, lst_b, 'r');
	else
		return (0);
	return (1);
}

void	checker(t_node **lst_a, t_node **lst_b)
{
	char	*order;
	int		exit;

	exit = 0;
	while (!exit)
	{
		order = ft_get_next_line(0);
		if (!check_order(lst_a, lst_b, order))
		{
			ft_printf("Error\n");
			exit = 1;
		}
		if (is_sorted(lst_a, lst_b))
		{
			ft_printf("OK\n");
			exit = 1;
		}
		free(order);
	}
	ft_printf("%i", is_sorted(lst_a, lst_b));
}
