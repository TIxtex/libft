/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:32:17 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 02:49:56 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	new_str = ft_calloc(sizeof(char), i--);
	if (NULL == new_str)
		return (NULL);
	while (i--)
		new_str[i] = f(i, s[i]);
	return (new_str);
}
