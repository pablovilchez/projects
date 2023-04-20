/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:13:51 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/20 12:20:16 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return (ch);
}
