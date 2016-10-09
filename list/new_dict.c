/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 05:12:12 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 18:19:38 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*new_dict(char *name, char *value, t_list *next)
{
	t_list	*node;

	node = (t_list*)malloc(sizeof(t_list));
	if (name)
		node->name = makestr(name);
	else
		node->name = NULL;
	if (value)
		node->value = makestr(value);
	else
		node->value = NULL;
	if (value)
		node->next = next;
	else
		node->next = NULL;
	return (node);
}
