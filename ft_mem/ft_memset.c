/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:21:47 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/03 18:39:53 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	register size_t			size;
	register unsigned char	c_aux;
	register unsigned char	*dest;

	size = len;
	c_aux = (unsigned char)c;
	dest = dst;
	while (ZERO != size--)
		dest[size] = c_aux;
	return (dst);
}
