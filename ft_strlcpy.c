/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:29 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 01:48:13 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	const char	*aux;

	if (dest == NULL)
		return (0);
	aux = src;
	if (dstsize-- != 0)
	{
		while (dstsize-- != 0 && *src != '\0')
			*(dest++) = *(src++);
		*dest = '\0';
	}
	return (ft_strlen(aux));
}
