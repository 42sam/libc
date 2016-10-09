/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 16:39:25 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 18:44:09 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstdelone(t_list **node, void (*del)(void *, size_t))
{
	if (node && *node && (*del))
	{
		del((*node)->content, (*node)->content_size);
		free(*node);
		*node = NULL;
	}
}
