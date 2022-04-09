/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:39:49 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:08:43 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	register size_t	size;
	register u_char	*dst;

	size = n;
	dst = s;
	while (size--)
		if (dst[size])
			dst[size] = dst[size] << TAM_U_CHAR | dst[size];
}
