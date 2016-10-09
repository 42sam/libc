/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 14:28:19 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 17:50:45 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*lst_to_str(t_list *node, char c)
{
	char	*str;
	int		i;
	char	*cos = "node->selected";

	i = 0;
	if (cos)
	{
		str = makestr(node->name);
		i++;
	}
	else
		str = makestr("");
	node = node->next;
	while (node)
	{
		if (cos)
		{
			if (i != 0)
				str = ft_strjoin(str, char_to_str(c));
			str = ft_strjoin(str, node->name);
			i++;
		}
		node = node->next;
	}
	return (str);
}
