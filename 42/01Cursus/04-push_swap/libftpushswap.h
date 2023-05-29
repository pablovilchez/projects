/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpushswap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:11:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 03:58:20 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUSHSWAP_H
# define LIBFTPUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

//Funciones del archivo:	lst_print.c
void	lst_print(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	push_swap.c
void	push_swap(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	lst_actions.c
void	push(t_node **lst_a, t_node **lst_b, char x);
void	swap(t_node **lst_a, t_node **lst_b, char x);
void	rotate(t_node **lst_a, t_node **lst_b, char x);
void	reverse(t_node **lst_a, t_node **lst_b, char x);
//Funciones del archivo:	error_check.c
int		error_args(int argc, char *argv[]);

void	push_swap(t_node **lst_a, t_node **lst_b);
/*
void	push_swap(t_node **lst_a, t_node **lst_b);
t_node	*lst_new(int num);
int		lst_size(t_node *lst);
t_node	*lst_last(t_node *lst);
*/

#endif