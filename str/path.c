/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:09:06 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 15:09:18 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*dirname(char *path)
{
	return ((ft_strchr_rev(path, '/')) ?
	ft_strsub(path, 0, has_char_rev(path, '/')) :
	ft_strdup("./"));
}

char 	*basename(char *path)
{
	return ((ft_strchr_rev(path, '/')) ? ft_strchr_rev(path, '/') + 1 : path);
}
