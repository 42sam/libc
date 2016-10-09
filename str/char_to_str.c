/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 03:23:46 by ssachet           #+#    #+#             */
/*   Updated: 2015/03/25 22:13:30 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*char_to_str(char c)
{
	char	*str;

	str = (char *)malloc(2);
	*str = c;
	*(str + 1) = '\0';
	return (str);
}