/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:05:27 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 20:33:28 by ulherrer         ###   ########.fr       */
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
