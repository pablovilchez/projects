/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:18:02 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/01 20:07:51 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	push_swap_test(t_node **lst_a, t_node **lst_b)
{
	push(lst_a, lst_b, 'b');
	push(lst_a, lst_b, 'b');
	push(lst_a, lst_b, 'b');
	lst_fill_index(lst_a, lst_b);
	lst_fill_stats(lst_a, lst_b);
	lst_print_stacks(lst_a, lst_b);
	lst_print_structs(lst_a, lst_b);
}
