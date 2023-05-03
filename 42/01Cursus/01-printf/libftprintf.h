/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:27:01 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/01 00:25:03 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./00-libft/libft.h"

int		ft_printf(const char *str, ...);

#endif