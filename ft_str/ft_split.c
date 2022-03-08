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

static unsigned int	ft_countchar(char const *s, char c)
{
	unsigned int	size;

	size = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		if (*(s - 1) != c)
			size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	char const	*start;
	char const	*finish;
	size_t		i;
	size_t		size;

	if (!s)
		return (NULL);
	size = ft_countchar(s, c);
	str = (char **)ft_calloc(1 + size, sizeof(char *));
	i = 0;
	while (*s && size--)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s != '\0' && *s != c)
			s++;
		finish = s;
		str[i++] = ft_substr(start, 0, finish - start);
	}
	return (str);
}