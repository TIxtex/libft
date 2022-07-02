/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:20:21 by uliherre          #+#    #+#             */
/*   Updated: 2022/07/02 13:59:45 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_TYPES_H
# define MY_TYPES_H

typedef struct s_smart_str	t_smart_str;
typedef struct s_smart_str	t_ss;

struct	s_smart_str
{
	size_t		size;
	char		*str;
};

#endif
