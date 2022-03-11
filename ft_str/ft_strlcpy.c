/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:29 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:30 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	const char	*str;

	if (NULL == dest)
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
