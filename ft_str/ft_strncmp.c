/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:26:16 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:40 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*s1_aux;
	const unsigned char	*s2_aux;

	if (n == 0)
		return (0);
	s1_aux = (const unsigned char *)s1;
	s2_aux = (const unsigned char *)s2;
	while (*s1_aux == *s2_aux && *s1_aux && *s2_aux && n-- > 1)
	{
		s1_aux++;
		s2_aux++;
	}
	return (*s1_aux - *s2_aux);
}
