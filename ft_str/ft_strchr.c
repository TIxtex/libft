/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:59:57 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:19 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str_aux;
	char	c_aux;

	c_aux = (char)c;
	str_aux = (char *)s;
	while (*str_aux != '\0')
	{
		if (*str_aux == c_aux)
			return (str_aux);
		str_aux++;
	}
	if (c_aux == '\0')
		return (str_aux);
	else
		return (NULL);
}
