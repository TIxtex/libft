/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:39 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/22 22:25:47 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n)
	{
		*(char *)(dst) = *(const char *)(src);
		ft_memcpy(dst + TRUE, src + TRUE, --n);
	}
	return (dst);
}

void	*ft_memcpy_1(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		ft_memset(*(dst++), *(src++), 1);
	return (dst);
}

void	*ft_memcpy_2(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (n-- && ++i)
		ft_memset(&dst[i], src[i], 1);
	return (dst);
}

void	*ft_memcpy_r(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n)
	{
		ft_memcpy(dst + TRUE, src + TRUE, --n);
		*(char *)(dst) = *(const char *)(src);
	}
	return (dst);
}