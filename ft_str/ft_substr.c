/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:14:30 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:57 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		size;
	char const	*sub_start;
	char		*str_ret;

	if (s == NULL)
		return (NULL);
	if (!(*s) || start > ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	size = ZERO;
	sub_start = s;
	while (*(s++) && len--)
		size++;
	str_ret = (char *)ft_calloc(++size, sizeof(char));
	if (NULL == str_ret)
		return (NULL);
	ft_strlcpy(str_ret, sub_start, c);
	return (str_ret);
}
