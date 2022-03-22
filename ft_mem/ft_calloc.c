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

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	size_t	bytes;

	bytes = size * count;
	new = malloc(bytes);
	if (!new)
		return (NULL);
	return (ft_memset(new, ZERO, bytes));
}
