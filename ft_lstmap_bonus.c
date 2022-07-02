/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 02:19:13 by uherrero          #+#    #+#             */
/*   Updated: 2022/07/02 16:58:52 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (NULL != lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (NULL == new_lst)
			return (NULL);
		if (lst->next != NULL)
		{
			new_lst->next = ft_lstmap(lst->next, f, del);
			if (NULL == new_lst->next)
				ft_lstdelone(new_lst, del);
		}
		return (new_lst);
	}
	return (NULL);
}
