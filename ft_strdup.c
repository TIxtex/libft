/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:59:13 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/09 13:40:13 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	size_t	size;

	size = ft_strlen(s1) + 1;
	aux = (char *)ft_calloc(size, sizeof(char));
	if (NULL == aux)
		return (NULL);
	ft_strlcpy(aux, s1, size);
	return (aux);
}
