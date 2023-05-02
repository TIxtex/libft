/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:41:13 by uherrero          #+#    #+#             */
/*   Updated: 2022/06/16 19:56:07 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (NULL != lst)
	{
		if (NULL != del)
			del(lst->content);
		free(lst);
		lst = NULL;
	}
}

void	ft_lstdelone_d(t_list_d *lst, void (*del)(void *))
{
	if (NULL != lst)
	{
		if (NULL != lst->next && NULL != lst->prev)
		{
			lst->prev->next = lst->next;
			lst->next->prev = lst->prev;
		}
		else if (NULL != lst->prev)
			lst->prev->next = NULL;
		else if (NULL != lst->next)
			lst->next->prev = NULL;
		if (NULL != del)
			del(lst->content);
		free(lst);
		lst = NULL;
	}
}