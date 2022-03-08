/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:57:45 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:35:08 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
