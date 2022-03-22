/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:21:47 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:34:48 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	if (len)
	{
		(unsigned char *)*dst = (unsigned char)c;
		ft_memset(dst + TRUE, c, --len)
	}
	return (dst);
}
