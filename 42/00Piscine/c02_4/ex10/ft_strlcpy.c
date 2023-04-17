/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:00:28 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/14 10:07:06 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	*src;
	char	dest[20];
	int		size;
	int		res;

	src = "Cadena de prueba";
	size = 0;
	res = ft_strlcpy(dest, src, size);
	printf("%s \n%s \n%i", src, dest, res);
	return (0);
}
*/