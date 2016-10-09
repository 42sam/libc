/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 01:43:14 by ssachet           #+#    #+#             */
/*   Updated: 2016/01/05 18:21:33 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			push_arg(t_stack **head, t_stack *new)
{
	if (head && new)
	{
		new->next = *head;
		*head = new;
	}
}

t_stack			*new_stack(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	node->nb = nb;
	node->next = NULL;
	return (node);
}

t_stack			*array_to_stack(char **array)
{
	t_stack	*node;
	t_stack	*head;
	t_stack	**hd;

	head = NULL;
	hd = &head;
	array++;
	while (*array)
	{
		if (!is_int(*array))
			return(NULL);
		node = new_stack(ft_atoi(*array));
		push_arg(hd, node);
		hd = &((*hd)->next);
		array++;
	}
	return (head);
}
