/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:36:04 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 00:00:55 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str_aux;
	unsigned char		c_aux;

	c_aux = (unsigned char)c;
	str_aux = (const unsigned char *)s;
	while (n-- != 0)
	{
		if (c_aux == *str_aux)
			return ((void *)str_aux);
		str_aux++;
	}
	return (NULL);
}
