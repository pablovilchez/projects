/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:32:33 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 17:32:13 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

t_node	**reverse(t_node **lst)
{
	t_node	*first;
	t_node	*last;

	first = *lst;
	last = lst_last(first);
	*lst = first->next;
	last->next = first;
	first->next = NULL;
	return (lst);
}

void	act_reverse(t_node **lst_a, t_node **lst_b, char mode)
{
	if (mode == 'a' && lst_size(*lst_a) >= 2)
	{
		reverse(lst_a);
		printf("rra\n");
	}
	else if (mode == 'b' && lst_size(*lst_b) >= 2)
	{
		reverse(lst_b);
		printf("rrb\n");
	}
	else if (mode == 'r' && lst_size(*lst_a) >= 2 && lst_size(*lst_b) >= 2)
	{
		reverse(lst_a);
		reverse(lst_b);
		printf("rrr\n");
	}
}
