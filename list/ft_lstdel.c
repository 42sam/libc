/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 16:39:26 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/22 18:51:28 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *tmp2;

	if (alst && *alst && del)
	{
		tmp = *alst;
		while (tmp)
		{
			tmp2 = tmp;
			del(tmp->content, tmp->content_size);
			tmp = tmp->next;
			free(tmp2);
		}
		*alst = NULL;
	}
}
