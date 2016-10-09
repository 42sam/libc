/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:39:14 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 19:41:42 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*str_insert(char *str, char *to_insert, int index)
{
	char *newstr;
	char *end;

	if (index > (int)ft_strlen(str))
		return (NULL);
	if (index == 0)
	{
		newstr = ft_strjoin(to_insert, str);
	}
	else
	{
		newstr = ft_strsub(str, 0, index);
		newstr = ft_strjoin(newstr, to_insert);
		end = ft_strsub(str, index, ft_strlen(str) - index);
		newstr = ft_strjoin(newstr, end);
	}
	return (newstr);
}

