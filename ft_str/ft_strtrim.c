/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:04:18 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:54 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char		*str_ret;

	if (!s1)
		return (NULL);
	start = s1;
	while (*s1 && ft_strchr(set, *s1))
		start = ++s1;
	while (*s1)
		s1++;
	end = --s1;
	while (ft_strchr(set, *s1) && end >= start)
		end = --s1;
	if (end - start > 0)
	{
		str_ret = (char *)ft_calloc(2 + end - start, sizeof(char));
		if (NULL == str_ret)
			return (str_ret);
		ft_strlcpy(str_ret, start, 2 + end - start);
	}
	else
		str_ret = ft_calloc(1, 1);
	return (str_ret);
}