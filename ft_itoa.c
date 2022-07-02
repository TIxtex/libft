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

static void	ft_digit_itoa(unsigned int nb, char *str)
{
	if (nb / 10)
		ft_digit_itoa(nb / 10, str + 1);
	*str = '0' + (nb % 10);
}

static void	ft_putnbr_itoa(int nb, char *str)
{
	if (nb < 0)
	{
		nb *= -1;
		*(str++) = '-';
	}
	ft_digit_itoa(nb, str);
}

char	*ft_itoa(int n)
{
	char	*str_num;

	str_num = (char *)ft_calloc(12, sizeof(char));
	if (NULL == str_num)
		return (NULL);
	ft_putnbr_itoa(n, str_num);
	if (*str_num == '-')
		ft_strrev(str_num + 1);
	else
		ft_strrev(str_num);
	return (str_num);
}

char	*ft_utoa(unsigned int n)
{
	char	*str_num;

	str_num = (char *)ft_calloc(11, sizeof(char));
	if (NULL == str_num)
		return (NULL);
	ft_digit_itoa(n, str_num);
	ft_strrev(str_num);
	return (str_num);
}
