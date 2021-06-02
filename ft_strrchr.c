/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:14:27 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 01:29:41 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str_aux;
	char	c_aux;

	c_aux = (char)c;
	str_aux = NULL;
	while (*s != '\0')
	{
		if (*s == c_aux)
			str_aux = (char *)s;
		s++;
	}
	if (str_aux != NULL)
		return (str_aux);
	else if (c_aux == '\0')
		return ((char *)s);
	else
		return (NULL);
}
