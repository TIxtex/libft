/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:39 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/17 23:43:46 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*aux_dst;
	const char	*aux_src;

	if (!dst && !src)
		return (NULL);
	aux_src = (const char *)src;
	aux_dst = (char *)dst;
	while (n-- > 0)
		*(aux_dst++) = *(aux_src++);
	return (dst);
}
