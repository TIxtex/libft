/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:03:22 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/13 22:01:20 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swapchar(char *c1, char *c2)
{
	char	aux;

	aux = *c1;
	*c1 = *c2;
	*c2 = aux;
}

char	*ft_strrev(char *str)
{
	size_t	size;
	char	*start;
	char	*end;

	start = str;
	size = ft_strlen(str);
	end = str + size - 1;
	while (start < end)
		ft_swapchar(start++, end--);
	return (str);
}
