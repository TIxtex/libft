/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:46:15 by uherrero          #+#    #+#             */
/*   Updated: 2022/07/02 14:33:14 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (NULL != new && NULL != alst)
	{
		*alst = ft_lstlast(*alst);
		if (NULL == *alst)
			*alst = new;
		else
			(*alst)->next = new;
	}
}
