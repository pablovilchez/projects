/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:15:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/26 12:02:18 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_str(char const *s, char c)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	if (s[0] != '\0' && s[0] != c)
		counter++;
	while (s[i] != '\0')
	{
		if (s[i] == c && (char)s[i + 1] != c && (char)s[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

size_t	tam(char const *s, char c, size_t pos)
{
	size_t	i;

	i = 0;
	while (s[pos] != '\0' && s[pos] != c)
	{
		i++;
		pos++;
	}
	return (i);
}

void	*free_all(char **matrix, size_t num)
{
	while (num > 0)
	{
		free((char *)matrix[num - 1]);
		num--;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	num;
	size_t	i;
	char	**matrix;

	i = 0;
	num = 0;
	matrix = malloc(sizeof(char *) * (count_str(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			matrix[num] = ft_substr(s, i, tam(s, c, i));
			if (matrix[num] == NULL)
				return (free_all(matrix, num));
			num++;
			i += tam(s, c, i) - 1;
		}
		i++;
	}
	matrix[num] = NULL;
	return (matrix);
}
