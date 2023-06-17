/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpipex.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:43:25 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/17 16:36:33 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPIPEX_H
# define LIBFTPIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_pipex
{
	int		in_fd;
	int		out_fd;
	int		here_doc;
	int		is_invalid_infile;
	char	**cmd_paths;
	char	***cmd_args;
	int		cmd_count;
}			t_pipex;

#endif