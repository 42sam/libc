/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 14:21:40 by ssachet           #+#    #+#             */
/*   Updated: 2015/02/22 08:55:17 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_line(int fd, char *buf, char *data[fd])
{
	char	*n;
	int		rd;
	char	*tmpdata;

	rd = 0;
	while (!(n = ft_strchr(data[fd], '\n')) &&
		(rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		tmpdata = data[fd];
		data[fd] = ft_strjoin(tmpdata, buf);
		ft_strdel(&tmpdata);
	}
	if (rd == -1)
		return (-1);
	if (rd == 0 && !n)
		return (0);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	int			rd;
	char		*tmpdata;
	static char	*data[512];
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	if (!data[fd])
		data[fd] = ft_strnew(1);
	if ((rd = read_line(fd, buf, data)) == -1)
		return (-1);
	if (rd == 0)
	{
		*line = data[fd];
		data[fd] = NULL;
		return (0);
	}
	*line = ft_strsub(data[fd], 0, ft_strchr(data[fd], '\n') - data[fd]);
	tmpdata = data[fd];
	data[fd] = ft_strdup(ft_strchr(data[fd], '\n') + 1);
	ft_strdel(&tmpdata);
	return (1);
}
