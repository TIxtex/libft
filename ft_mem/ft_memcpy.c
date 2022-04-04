/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:39 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/04 15:48:29 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (n-- && ++i)
		ft_memset(&dst[i], ((char *)src)[i], sizeof(char));
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
