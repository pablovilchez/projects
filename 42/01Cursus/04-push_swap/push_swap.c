/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:18:02 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 01:41:43 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	push_swap(t_node **lst_a, t_node **lst_b)
{
	lst_print(lst_a, lst_b);
	printf("\n");
	rotate(lst_a, lst_b, 'a');
	lst_print(lst_a, lst_b);
	printf("\n");
	swap(lst_a, lst_b, 'a');
	lst_print(lst_a, lst_b);
	push(lst_a, lst_b, 'b');
	lst_print(lst_a, lst_b);
	push(lst_a, lst_b, 'b');
	lst_print(lst_a, lst_b);
	rotate(lst_a, lst_b, 'r');
	lst_print(lst_a, lst_b);
}
