/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:29 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:30 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	const char	*aux;

	if (dest == NULL)
		return (0);
	aux = src;
	if (dstsize-- != 0)
	{
		while (dstsize-- != 0 && *src != '\0')
			*(dest++) = *(src++);
		*dest = '\0';
	}
	return (ft_strlen(aux));
}
