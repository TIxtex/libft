/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:59:13 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:22 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + 1;
	str = (char *)ft_calloc(size, sizeof(char));
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, s1, size);
	return (str);
}
