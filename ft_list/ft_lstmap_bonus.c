/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 02:19:13 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/08 14:33:56 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (NULL != lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (NULL != new_lst && NULL != lst->next)
		{
			new_lst->next = ft_lstmap(lst->next, f, del);
			if (NULL == new_lst->next)
				ft_lstdelone(new_lst, del);
		}
		return (new_lst);
	}
	return (NULL);
}
