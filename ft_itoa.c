/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tixtex <tixtex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:50:56 by uherrero          #+#    #+#             */
/*   Updated: 2019/12/20 17:43:26 by tixtex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_digit(unsigned int nb, char *str)
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

char	*ft_itoa(int n)
{
	char	*strnum;

	strnum = ft_calloc(sizeof(char), 12);
	if (NULL == strnum)
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

char	*ft_utoa(unsigned int num)
{
	char	*str_num;

	str_num = ft_calloc(sizeof(char), 11);
	if (NULL == str_num)
		return (NULL);
	ft_digit(num, str_num);
	str_num = ft_strrev(str_num);
	return (str_num);
}
