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
	size_t	len_src;
	size_t	len_dst;

	n = ZERO;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (*dst && dstsize > 1)
	{
		dst++;
		dstsize--;
		n++;
	}
	while (*src && dstsize > 1)
	{
		*(dst++) = *(src++);
		dstsize--;
		n++;
	}
	if (n > len_dst)
		*dst = ZERO;
	if (len_dst > ++n)
		len_dst = n;
	return (len_src + len_dst);
}
