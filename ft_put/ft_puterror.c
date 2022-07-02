/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:55:02 by uliherre          #+#    #+#             */
/*   Updated: 2022/06/16 20:55:03 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_puterror(const char *error)
{
	if (NULL != error)
	{
		write(STDERR_FILENO, "Error: ", 7);
		write(STDERR_FILENO, error, ft_strlen(error));
		write(STDERR_FILENO, "\n", 1);
	}
	exit(-42);
}
