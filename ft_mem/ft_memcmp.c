/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:05:34 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/22 16:32:33 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	register const unsigned char	*str_1;
	register const unsigned char	*str_2;

	if (ZERO == n)
		return (ZERO);
	str_1 = (const unsigned char *)s1;
	str_2 = (const unsigned char *)s2;
	while (*str_1 == *str_2 && ZERO != --n)
		str_1++, str_2++;
	return (*str_1 - *str_2);
}
