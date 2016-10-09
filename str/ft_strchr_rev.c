/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 19:23:37 by ssachet           #+#    #+#             */
/*   Updated: 2015/03/25 22:13:31 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr_rev(char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (makestr(s + i));
		else
			i--;
	}
	return (NULL);
}
