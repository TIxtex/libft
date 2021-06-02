/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:05:27 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/09 13:39:46 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	void	*initialaux;
	size_t	total;

	total = size * count;
	aux = malloc(total);
	if (NULL == aux)
		return (NULL);
	initialaux = aux;
	while (total-- > 0)
		*((char *)aux++) = 0;
	return (initialaux);
}
