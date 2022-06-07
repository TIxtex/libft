/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:14:30 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:45:19 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		size;
	char const	*sub_start;
	char		*new;

	if (NULL == s)
		return (NULL);
	if (!(*s) || start > ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	size = ZERO;
	sub_start = s;
	while (*(s++) && len--)
		size++;
	new = (char *)ft_calloc(++size, sizeof(char));
	ft_strlcpy(new, sub_start, size);
	return (new);
}
