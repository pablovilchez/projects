/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpushswap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:11:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 21:09:46 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUSHSWAP_H
# define LIBFTPUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

//Funciones del archivo:	lst_print_stacks.c
void	lst_print_stacks(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_print_structs.c
void	lst_print_structs(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_fill_stats.c
void	lst_fill_stats(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	push_swap.c
void	push_swap(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_actions.c
void	push(t_node **lst_a, t_node **lst_b, char x);
void	swap(t_node **lst_a, t_node **lst_b, char x);
void	rotate(t_node **lst_a, t_node **lst_b, char x);
void	reverse(t_node **lst_a, t_node **lst_b, char x);
//Funciones del archivo:	lst_sort_plus.c
void	lst_sort_plus(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_sort_plus_aux.c
int		rotate_a(t_node **lst_a, t_node **lst_b, int mov_b);
int		reverse_a(t_node **lst_a, t_node **lst_b, int mov_b);
int		rotate_b(t_node **lst_a, t_node **lst_b);
int		reverse_b(t_node **lst_a, t_node **lst_b);
int		sum_abs(int a, int b);
//Funciones del archivo:	error_check.c
int		error_args(int argc, char *argv[], int two);
//Funciones del archivo:	push_swap.c
void	push_swap(t_node **lst_a, t_node **lst_b);
void	lst_sort_three(t_node **lst_a, t_node **lst_b);
void	lst_sort_two(t_node **lst_a, t_node **lst_b);
size_t	is_sorted(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	push_swap_test.c
void	push_swap_test(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_fill_index.c
void	lst_fill_index(t_node **lst_a, t_node **lst_b);

#endif