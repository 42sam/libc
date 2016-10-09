/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:40:56 by ssachet           #+#    #+#             */
/*   Updated: 2015/03/25 22:13:30 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		char_index(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}