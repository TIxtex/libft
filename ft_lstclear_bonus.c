/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:10:01 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/17 16:04:22 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst != NULL && *lst != NULL && del != NULL)
	{
		if ((*lst)->next != NULL)
			ft_lstclear((&(*lst)->next), del);
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
