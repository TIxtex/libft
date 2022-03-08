/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:05:35 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:28 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	lens;
	size_t	lend;

	n = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	while (*dst != '\0' && dstsize > 1)
	{
		dst++;
		dstsize--;
		n++;
	}
	while (*src != '\0' && dstsize > 1)
	{
		*(dst++) = *(src++);
		dstsize--;
		n++;
	}
	if (n > lend)
		*dst = '\0';
	if (lend > ++n)
		lend = n;
	return (lens + lend);
}
