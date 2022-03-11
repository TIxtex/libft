/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:14:27 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:46 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str_aux;
	char	c_aux;

	c_aux = (char)c;
	str_aux = NULL;
	while (*s)
	{
		if (*s == c_aux)
			str_aux = (char *)s;
		s++;
	}
	if (str_aux)
		return (str_aux);
	else if (!c_aux)
		return ((char *)s);
	return (NULL);
}
