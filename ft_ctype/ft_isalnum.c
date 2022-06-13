/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:52:30 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:33:15 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int x)
{
	if (TRUE == ft_isalpha(x) || TRUE == ft_isdigit(x))
		return (TRUE);
	return (FALSE);
}
