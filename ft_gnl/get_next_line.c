/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 02:10:52 by uherrero          #+#    #+#             */
/*   Updated: 2022/03/22 16:46:18 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_isnl(char *buf)
{
	int		index;

	index = -1;
	while (++index < BUFFER_SIZE && *buf)
		if (buf[index] == '\n' || buf[index] == '\r')
			return (index);
	return (-1);
}

static int	ft_get_next_line(int *i, char **buf, char **line, int fd)
{
	i[0] = ft_isnl(buf[0]);
	while (i[0] == -1)
	{
		*line = ft_strjoin_f1(*line, buf[0]);
		i[1] = read(fd, buf[0], BUFFER_SIZE);
		if (i[1] == -1)
		{
			free(buf[0]);
			free(*line);
			return (-1);
		}
		else if (i[1] == 0)
		{
			free(buf[0]);
			return (0);
		}
		buf[0][i[1]] = '\0';
		i[0] = ft_isnl(buf[0]);
	}
	buf[1] = ft_substr(buf[0], 0, i[0]);
	*line = ft_strjoin_f1(*line, buf[1]);
	free(buf[1]);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*s[9999];
	char		*buf[2];
	int			i[3];

	if (fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	*line = (char *)ft_calloc(1, 1);
	buf[0] = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (buf[0] == NULL || *line == NULL)
		return (-1);
	if (s[fd] != NULL)
	{
		ft_strlcpy(buf[0], s[fd], BUFFER_SIZE);
		free(s[fd]);
		s[fd] = NULL;
	}
	i[2] = ft_get_next_line(i, buf, line, fd);
	if (i[2] < 1)
		return (i[2]);
	s[fd] = ft_substr(buf[0], i[0] + 1, BUFFER_SIZE - i[0]);
	free(buf[0]);
	return (1);
}
