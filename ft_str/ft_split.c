/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:15:49 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:16 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	register size_t	size;

	size = ZERO;
	while ('\0' != *s)
	{
		while (*s == c && '\0' != *s)
			s++;
		while (*s != c && '\0' != *s)
			s++;
		if (*(s - 1) != c)
			size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	register char		**str;
	register char const	*start;
	register char const	*finish;
	register size_t		i;
	register size_t		size;

	if (NULL == s)
		return (NULL);
	size = ft_count_word(s, c);
	str = (char **)ft_calloc(1 + size, sizeof(char *));
	if (NULL == str)
		return (NULL);
	i = ZERO;
	while (ZERO != size--)
	{
		while (*s == c)
			s++;
		start = s;
		while ('\0' != *s && *s != c)
			s++;
		finish = s;
		str[i++] = ft_substr(start, ZERO, finish - start);
	}
	return (str);
}
