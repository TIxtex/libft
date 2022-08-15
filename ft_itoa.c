/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:50:56 by uherrero          #+#    #+#             */
/*   Updated: 2022/08/15 12:41:21 by uliherre         ###   ########.fr       */
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
		nb = -nb;
		*(str++) = '-';
	}
	ft_digit_itoa(nb, str);
}

static size_t	ft_numlen(int num)
{
	register size_t			len;
	register unsigned int	n;

	len = TRUE;
	if (ZERO > num)
	{
		len++;
		n = -num;
	}
	else
		n = num;
	while (ZERO < n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	register size_t	num_len;
	register char	*str_num;

	str_num = NULL;
	num_len = ft_numlen(n);
	if (ZERO != num_len)
	{
		str_num = (char *) ft_calloc(num_len + 1, sizeof(char));
		if (NULL == str_num)
			return (NULL);
		ft_putnbr_itoa(n, str_num);
		if (*str_num == '-')
			ft_strrev(str_num + 1);
		else
			ft_strrev(str_num);
	}
	return (str_num);
}
