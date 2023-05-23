/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:18:02 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:56:06 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	push_swap(t_node **lst_a, t_node **lst_b)
{
	lst_print(lst_a);
	printf("\n");
	rotate(lst_a);
	lst_print(lst_a);
	printf("\n");
	swap(lst_a);
	lst_print(lst_a);
	rotate(lst_b);
}
