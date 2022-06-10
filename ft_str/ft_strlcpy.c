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
	register const char	*str;
	register size_t		x;

	if (NULL == dest)
		return (ZERO);
	x = dstsize;
	str = src;
	if (ZERO != dstsize)
		while (ZERO != --dstsize)
		{
			*(dest++) = *(src++);
			if ('\0' == *(dest - 1))
				break;
		}
	if (ZERO == dstsize)
	{
		if (ZERO != x)
			*dest = '\0';
		while ('\0' != *(src++))
			;
	}
	return (src - str - 1);
}
