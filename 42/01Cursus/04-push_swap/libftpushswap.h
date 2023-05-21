/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpushswap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:11:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/21 23:34:49 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUSHSWAP_H
# define LIBFTPUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct n_list
{
	int				num;
	struct n_list	*next;
}					t_node;
void	push_swap(t_node **lst_a, t_node **lst_b);
void	print_lst(t_node **lst);
t_node	*lst_new(int num);
int	lst_size(t_node *lst);
t_node	*lst_last(t_node *lst);


#endif