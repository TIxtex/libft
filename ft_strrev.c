/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:03:22 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:50 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swapchar(char *c1, char *c2)
{
	register char	aux;

	aux = *c1;
	*c1 = *c2;
	*c2 = aux;
}

void	ft_strrev(char *str)
{
	register size_t	size;
	register char	*end;

	size = ft_strlen(str);
	end = str + size - 1;
	while (str < end)
		ft_swapchar(str++, end--);
}
