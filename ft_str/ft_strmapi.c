/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:32:17 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:25:25 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	tam;

	if (!s)
		return (NULL);
	tam = ft_strlen(s);
	new = (char *)ft_calloc(tam + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (tam--)
		new[tam] = f(tam, s[tam]);
	return (new);
}
