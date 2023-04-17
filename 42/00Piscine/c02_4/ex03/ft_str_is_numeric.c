/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:06:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/13 12:49:50 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if ((*str < '0' || *str > '9'))
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

	str = "584654654";
	res = ft_str_is_numeric(str);
	printf("%i", res);
	return (0);
}
*/