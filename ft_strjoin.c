/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:03:01 by uherrero          #+#    #+#             */
/*   Updated: 2022/06/16 20:57:56 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	register char	*nw_str;
	register char	*start;

	if (NULL == s1 || NULL == s2)
		return (NULL);
	nw_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	start = nw_str;
	if (NULL != nw_str)
	{
		while ('\0' != *s1)
			*(nw_str++) = *(s1++);
		while ('\0' != *s2)
			*(nw_str++) = *(s2++);
	}
	return (start);
}

char	*ft_strjoin_f1(char *s1, char const *s2)
{
	char	*nw_str;
	char	*start;
	char	*to_free;

	if (!s1 || !s2)
		return (NULL);
	nw_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (NULL == nw_str)
		return (NULL);
	start = nw_str;
	to_free = s1;
	while (*s1)
		*(nw_str++) = *(s1++);
	while (*s2)
		*(nw_str++) = *(s2++);
	free(to_free);
	return (start);
}

char	*ft_strjoin_f2(char const *s1, char *s2)
{
	char	*nw_str;
	char	*start;
	char	*to_free;

	if (!s1 || !s2)
		return (NULL);
	nw_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (NULL == nw_str)
		return (NULL);
	start = nw_str;
	to_free = s2;
	while (*s1)
		*(nw_str++) = *(s1++);
	while (*s2)
		*(nw_str++) = *(s2++);
	free(to_free);
	return (start);
}

char	*ft_strjoin_f1_f2(char *s1, char *s2)
{
	char	*nw_str;
	char	*start;
	char	*to_free_s1;
	char	*to_free_s2;

	if (!s1 || !s2)
		return (NULL);
	nw_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (NULL == nw_str)
		return (NULL);
	start = nw_str;
	to_free_s1 = s1;
	to_free_s2 = s2;
	while (*s1)
		*(nw_str++) = *(s1++);
	while (*s2)
		*(nw_str++) = *(s2++);
	free(to_free_s1);
	free(to_free_s2);
	return (start);
}
