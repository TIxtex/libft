/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:57:45 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/14 19:06:15 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_digit(unsigned int nb, int fd)
{
	char	c;

	c = '0' + (nb % 10);
	if (nb / 10)
		ft_digit(nb / 10, fd);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	ft_digit(n, fd);
}
