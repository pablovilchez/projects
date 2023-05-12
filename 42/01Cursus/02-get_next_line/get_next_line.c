/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:01:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/12 11:28:44 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 5

char	*file_to_buffer(int fd, char *stack)
{
	int		num_bytes;
	char	*buffer;

	if (!stack)
		stack = ft_calloc(1, sizeof(char));
	num_bytes = 1;
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	buffer = 
}

char	*buffer_to_line(char *str)
{

}

char	*get_next_line(int fd)
{
	static char	static_str[BUFFER_SIZE + 1];
	char		*line_str;


}

int	main(void)
{
	int		file;
	char	*line_str;

	file = open("texto.txt", O_RDONLY);
	if (file < 0)
	{
		printf("Error opening file.\n");
		return (1);
	}
	line_str = get_next_line(file);
	while (line_str != NULL)
	{
		printf("%s\n", line_str);
		free(line_str);
		line_str = get_next_line(file);
	}
	close(file);
	return (0);
}
