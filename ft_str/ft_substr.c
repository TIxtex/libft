/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:14:30 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 02:55:38 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		c;
	char const	*sub_start;
	char		*str_ret;

	if (s == NULL)
		return (NULL);
	if (!(*s) || start > ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	c = 0;
	sub_start = s;
	while (*(s++) && len--)
		c++;
	str_ret = (char *)ft_calloc(++c, sizeof(char));
	if (NULL == str_ret)
		return (NULL);
	ft_strlcpy(str_ret, sub_start, c);
	return (str_ret);
}
