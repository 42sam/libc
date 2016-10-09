/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_dblst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 14:35:50 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 15:11:37 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			push_arg(t_list **head, t_list *new)
{
	if (head && new)
	{
		new->next = *head;
		*head = new;
	}
}

t_list			*new_arg(char *name, t_list *previous)
{
	t_list	*node;
	(void)previous;

	node = (t_list *)malloc(sizeof(t_list));
	node->name = name;
	//node->previous = previous;
	node->next = NULL;
	return (node);
}

t_list			*array_to_dblst(char **array)
{
	t_list	*node;
	t_list	*head;
	t_list	*previous;
	t_list	**headref;

	head = NULL;
	headref = &head;
	previous = NULL;
	array++;
	while (*array)
	{
		node = new_arg(*array, previous);
		push_arg(headref, node);
		previous = node;
		headref = &((*headref)->next);
		array++;
	}
	//head->previous = node;
	return (head);
}
