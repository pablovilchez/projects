/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:51:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/22 16:46:52 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*aux;

	aux = (char *)malloc((ft_strlen(src) + 1));
	if (!aux)
		return (NULL);
	return (ft_strcpy(aux, src));
}

/*
int	main(void)
{
	char	src[] = "Cadena dba";
	char	*dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	free (dest);
	return (0);
}
*/