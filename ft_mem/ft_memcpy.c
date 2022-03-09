/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:39 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:34:41 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*aux_dst;
	const char	*aux_src;

	if (!dst && !src)
		return (NULL);
	aux_src = (const char *)src;
	aux_dst = (char *)dst;
	while (n--)
		*(aux_dst++) = *(aux_src++);
	return (dst);
}
