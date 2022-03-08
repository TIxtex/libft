/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:03:01 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:25 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nw_str;
	char	*start;

	if (!s1 || !s2)
		return (NULL);
	nw_str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (NULL == nw_str)
		return (NULL);
	start = nw_str;
	while (*s1)
		*(nw_str++) = *(s1++);
	while (*s2)
		*(nw_str++) = *(s2++);
	return (start);
}
