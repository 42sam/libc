/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_grep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:25:10 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 20:35:24 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		set_width(t_list *node)
{
	int		width;
	int		digits;

	digits = 0;
	width = 1;
	while (node)
	{
		digits++;
		node = node->next;
	}
	while (digits /= 10)
		width++;
	return (width);
}

void		lst_grep(char *grep_str, t_list *node)
{
	int width;
	width = set_width(node);
	if (is_digitstr(grep_str))
	{
		while (node && !ft_strequ(node->name, grep_str))
		{
			ft_printf("%*s   %s\n",
								width, node->name, node->value);
			node = node->next;
		}
		if (node)
			ft_printf("%*s   %s\n",
								width, node->name, node->value);
	}
	else
	{
		while (node)
		{
			if (ft_strstr(node->value, grep_str))
				ft_printf("%*s   %s\n",
								width, node->name, node->value);
			node = node->next;
		}
	}
}

