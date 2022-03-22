/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:21:47 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/22 16:33:48 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	if (len)
	{
		*(unsigned char *)dst = (unsigned char)c;
		ft_memset(dst + TRUE, c, --len);
	}
	return (dst);
}

void	*ft_memset_0(void *dst, int c, size_t len)
{
	if (len)
	{
		*(unsigned char *)dst = (unsigned char)c;
		ft_memset(dst + 1, c, len - 1);
	}
	return (dst);
}

void	*ft_memset_1(void *dst, int c, size_t len)
{
	unsigned char *dst_aux;
	unsigned char aux_c;

	aux_c = (unsigned char)c;
	dst_aux = (unsigned char *)dst
	while (len--)
		*(aux_dst++) = aux_c;
	return (dst);
}

void	*ft_memset_2(void *dst, int c, size_t len)
{
	unsigned char *dst_aux;
	unsigned char aux_c;

	aux_c = (unsigned char)c;
	dst_aux = (unsigned char *)dst
	while (len--)
		aux_dst[len] = aux_c;
	return (dst);
}