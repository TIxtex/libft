/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:50:56 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 03:26:40 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_digit(unsigned int nb, char *str)
{
	char	c;

	c = '0' + (nb % 10);
	if (nb / 10)
		ft_digit(nb / 10, str + 1);
	*str = c;
}

static void	ft_putnbr(int nb, char *str)
{
	if (nb < 0)
	{
		nb *= -1;
		*(str++) = '-';
	}
	ft_digit(nb, str);
}

char		*ft_itoa(int n)
{
	char	*strnum;

	if ((strnum = ft_calloc(sizeof(char), 12)) == NULL)
		return (NULL);
	ft_putnbr(n, strnum);
	if (*strnum == '-')
	{
		strnum++;
		strnum = ft_strrev(strnum);
		strnum--;
	}
	else
		strnum = ft_strrev(strnum);
	return (strnum);
}
