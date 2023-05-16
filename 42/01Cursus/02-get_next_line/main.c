/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:36:19 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/16 14:20:21 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		file;
	char	*line_str;

	file = open("read_error.txt", O_RDONLY);
	if (file < 0)
	{
		printf("Error opening file.\n");
		return (1);
	}
	while (line_str != NULL)
	{
		line_str = get_next_line(file);
		if (line_str != NULL)
			printf("%s\n", line_str);
		free(line_str);
	}
	close(file);
	return (0);
}
