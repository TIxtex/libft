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
	register const unsigned char	*source;
	register unsigned char			*destiny;
	register size_t					loop;
	register unsigned char			c_aux;

	if (ZERO != n)
	{
		source = (unsigned char *) src;
		destiny = (unsigned char *) dst;
		loop = n;
		c_aux = c;
		while (ZERO < loop--)
		{
			*(destiny) = *(source);
			if (*destiny == c_aux)
				return(++destiny);
			destiny++;
			source++;
		}
	}
	return (NULL);
}
