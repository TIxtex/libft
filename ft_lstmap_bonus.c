/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uherrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 02:19:13 by uherrero          #+#    #+#             */
/*   Updated: 2019/11/18 15:48:07 by uherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	if (lst)
	{
		if (!(new_lst = ft_lstnew(f(lst->content))))
			return (NULL);
		if (lst->next != NULL)
			if (!(new_lst->next = ft_lstmap(lst->next, f, del)))
				ft_lstdelone(new_lst, del);
		return (new_lst);
	}
	return (NULL);
}
