/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:28:43 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:34:44 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_aux;
	const char	*src_aux;

	if (dst < (src))
		return (ft_memcpy(dst, src, len));
	else if (dst > src)
	{
		i = len;
		dst_aux = (char *)dst;
		src_aux = (const void *)src;
		while (i--)
			dst_aux[i] = src_aux[i];
	}
	return (dst);
}
