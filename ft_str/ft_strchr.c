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
	char	chr;

	chr = (char)c;
	str_aux = (char *)s;
	while (*(++str_aux))
		if (*str_aux == chr)
			return (str_aux);
	if (chr)
		return (NULL);
	return (str_aux);
}
