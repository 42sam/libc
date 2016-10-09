/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 11:21:16 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 18:27:26 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		set_value(char *name, char *value, int overwrite, t_list *node)
{
	t_list	*last;

	last = NULL;
	while (node)
	{
		if (ft_strequ(node->name, name))
			if (overwrite != 0)
			{
				node->value = makestr(value);
				return (0);
			}
		last = node;
		node = node->next;
	}
	if (last)
	{
		last->next = new_dict(name, value, NULL);
	}
	else
		E("Null value passed to function : Set value");
	return (0);
}
