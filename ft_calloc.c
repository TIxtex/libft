/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:05:27 by uherrero          #+#    #+#             */
/*   Updated: 2022/07/02 14:09:09 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_items, size_t size_item)
{
	register char	*new;
	register size_t	bytes;
	register size_t	x;

	bytes = num_items * size_item;
	new = (char *) malloc(bytes);
	if (NULL != new)
	{
		x = ZERO;
		while (x < bytes)
		{
			new[x] = '\0';
			x++;
		}
	}
	return ((void *) new);
}
