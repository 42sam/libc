/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_remove_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:01:30 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 19:03:38 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

int				find_and_remove_node(t_list *to_delete, t_list **head)
{
	t_list	*before;
	t_list	*node;

	if (ft_strequ((*head)->name, to_delete->name))
	{
		*head = (*head)->next;
		if (*head == NULL)
			return (-1);
	}
	node = *head;
	while (node)
	{
		if (ft_strequ(node->name, to_delete->name))
		{
			before->next = node->next;
			//double list version
			//if (node->next)
				//(node->next)->previous = before;
		}
		before = node;
		node = node->next;
	}
	return (1);
}
/* for archive purpose
int		lst_find_and_delete(t_list *to_delete, t_list **head)
{
	t_list	*before;
	t_list	*node;

	while (to_delete)
	{
		if (ft_strequ((*head)->name, to_delete->name))
		{
			*head = (*head)->next;
			if (*head == NULL)
				return (-1);
		}
		node = *head;
		while (node)
		{
			if (ft_strequ(node->name, to_delete->name))
				before->next = node->next;
			before = node;
			node = node->next;
		}
		to_delete = to_delete->next;
	}
	return (1);
} */
