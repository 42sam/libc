/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digitstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:39:27 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/28 03:13:23 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int				is_digitstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!((s[i] >= '0') && (s[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int				is_int_str(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (i == 0 && (s[i] == '-' || s[i] == '+'))
		{
			i++;
			continue;
		}
		if (!((s[i] >= '0') && (s[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int				is_int(char *str)
{
	char *max;
	int i;

	if (!is_int_str(str))
		return (0);
	max = makestr("2147483647");
	if (str[0] == '-')
	{
		str++;
		max[9] = '8';
	}
	if (LEN(str) > LEN(max))
		return (0);
	if (LEN(str) < LEN(max))
		return (1);
	i = 0;
	while(max[i])
	{
		if (str[i] > max[i])
			return (0);
		i++;
	}
	return (1);
}
