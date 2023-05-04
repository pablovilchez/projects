/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:27:01 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/04 20:56:52 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

char	*ft_itoa_long(long n);
int		ft_printf(const char *str, ...);
size_t	print_hex_cap(unsigned int nbr);
size_t	print_hex(unsigned int nbr);
size_t	print_int(int nbr);
size_t	print_str(char *str);
size_t	print_unsig_int(unsigned int nbr);
size_t	print_void(unsigned long long p);

#endif