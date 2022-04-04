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
	register size_t	size;
	register u_int	cr;
	register u_char	*dest;

	size = len;
	cr = c;
	dest = dst;
	while (size--)
		((unsigned char *)dest)[size] = (unsigned char)cr;
	return (dst);
}
