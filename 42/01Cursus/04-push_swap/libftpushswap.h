/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpushswap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:11:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:35:22 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUSHSWAP_H
# define LIBFTPUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct n_list
{
	int				num;
	struct n_list	*next;
}					t_node;
//Funciones del archivo:	lst_funct_01.c
t_node	*lst_new(int num);
int		lst_size(t_node *lst);
t_node	*lst_last(t_node *lst);
//Funciones del archivo:	lst_funct_02.c
void	lst_delone(t_node *lst);
void	lst_clear(t_node **lst);
void	lst_add_back(t_node **lst, t_node *new);
void	lst_add_front(t_node **lst, t_node *new);
//Funciones del archivo:	print_lst.c
void	lst_print(t_node **lst);
void	lst_print_both(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	push_swap.c
void	push_swap(t_node **lst_a, t_node **lst_b);
//Funciones del archivo:	act_rotate.c
t_node	**rotate(t_node **lst);
void	act_rotate(t_node **lst_a, t_node **lst_b, char mode);
//Funciones del archivo:	act_swap.c
t_node	**swap(t_node **lst);
void	act_swap(t_node **lst_a, t_node **lst_b, char mode);

void	push_swap(t_node **lst_a, t_node **lst_b);
/*
void	push_swap(t_node **lst_a, t_node **lst_b);
t_node	*lst_new(int num);
int		lst_size(t_node *lst);
t_node	*lst_last(t_node *lst);
*/

#endif