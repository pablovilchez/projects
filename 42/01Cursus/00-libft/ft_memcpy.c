/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:58:43 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/18 21:27:22 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, unsigned int n)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	while (src != '\0')
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
