/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:29 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:42:30 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	const char	*str;

	if (!dest)
		return (ZERO);
	str = src;
	if (dstsize--)
	{
		while (dstsize-- && *src)
			*(dest++) = *(src++);
		*dest = '\0';
	}
	return (ft_strlen(str));
}

/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!dst)
		return (ZERO);
	if (dstsize)
		dst = (char *)ft_memmove((void *)dst, (const void *)src, dstsize);
	return (ft_strlen(src));
}
*/