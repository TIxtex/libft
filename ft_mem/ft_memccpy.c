/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:06:34 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/22 16:32:11 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (ZERO == n)
		return (NULL);
	*(unsigned char *)(dst++) = *(const unsigned char *)(src++);
	if (*(unsigned char *)dst == (unsigned char)c)
		return (dst);
	else
		return (ft_memccpy(dst, src, c, --n));
}
