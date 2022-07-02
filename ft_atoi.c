/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:09:52 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:17:48 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				negative;
	unsigned int	value;

	value = ZERO;
	negative = TRUE;
	while (TRUE == ft_isspace(*str))
		str++;
	if ('+' == *str || '-' == *str)
		if ('-' == *(str++))
			negative = -1;
	while (TRUE == ft_isdigit(*str))
		value = value * 10 + *(str++) - '0';
	return ((int)value * negative);
}
