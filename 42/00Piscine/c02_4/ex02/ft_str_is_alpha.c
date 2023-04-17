/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:49:13 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/13 12:49:15 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if ((*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'))
			res = 0;
		str++;
	}
	return (res);
}

/*
int	main(void)
{
	int		res;
	char	*str;

	str = "Hola ";
	res = ft_str_is_alpha(str);
	printf("%i", res);
	return (0);
}
*/