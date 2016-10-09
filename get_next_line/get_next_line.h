/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:55:07 by ssachet           #+#    #+#             */
/*   Updated: 2015/06/06 23:16:03 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../libft.h"
# include <fcntl.h>
# include <string.h>
# define BUFF_SIZE 3
//# define PATH_MAX 4000


int				get_next_line(int const fd, char **line);

typedef struct	s_var
{
	int			rd;
	int			n;
	int			fd;
}				t_var;
#endif
