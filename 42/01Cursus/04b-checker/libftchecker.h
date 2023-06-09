/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftchecker.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:11:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 22:36:06 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTCHECKER_H
# define LIBFTCHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

//Funciones del archivo:	lst_actions.c
void	push(t_node **lst_a, t_node **lst_b, char x);
void	swap(t_node **lst_a, t_node **lst_b, char x);
void	rotate(t_node **lst_a, t_node **lst_b, char x);
void	reverse(t_node **lst_a, t_node **lst_b, char x);
//Funciones del archivo:	error_arg_check.c
int		error_args(int argc, char *argv[], int two);
size_t	check_digit(int argc, char *argv[]);
size_t	check_doubles(int argc, char *argv[]);
size_t	check_int(int argc, char *argv[]);
size_t	check_int_len(size_t len, char sig, char *str);
//Funciones del archivo:	checker.c
void	checker(t_node **lst_a, t_node **lst_b);
void	check_order(t_node **lst_a, t_node **lst_b, char *order);
size_t	is_sorted(t_node **lst_a, t_node **lst_b);

#endif