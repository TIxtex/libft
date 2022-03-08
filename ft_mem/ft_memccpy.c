/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:06:34 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/17 23:48:26 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*aux_dst;
	const unsigned char	*aux_src;
	unsigned char		c_aux;

	if (n)
	{
		c_aux = (unsigned char)c;
		aux_dst = (unsigned char *)dst;
		aux_src = (const unsigned char *)src;
		while (n-- > 0)
		{
			*(aux_dst++) = *(aux_src++);
			if (*aux_dst == c_aux)
				return (aux_dst);
		}
	}
	return (NULL);
}
