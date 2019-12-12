/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:03:01 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 02:28:03 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*start;

	if (!s1 || !s2)
		return (NULL);
	if (!(new_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1)))
		return (NULL);
	start = new_str;
	while (*s1)
		*(new_str++) = *(s1++);
	while (*s2)
		*(new_str++) = *(s2++);
	return (start);
}
