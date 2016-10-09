/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 01:33:37 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/28 02:02:06 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_stack *new_stack_node(char *nb)
{
	t_stack	*node;

	if (!is_int(nb))
		return (NULL);
	if (NULL == (node = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	node->nb = ft_atoi(nb);
	node->next = NULL;
	return (node);
}

static int		wordlen(char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static char		*str_to_stack2(t_stack **head, t_stack **previous, char *word)
{
	if (*head == NULL)
	{
		if (NULL == ((*head) = new_stack_node(word)))
			return (NULL);
		*previous = *head;
	}
	else
	{
		if (NULL == ((*previous)->next = new_stack_node(word)))
			return (NULL);
		*previous = (*previous)->next;
	}
	return (word);
}

t_stack			*str_to_stack(char const *s, char c)
{
	int		i;
	char	*word;
	t_stack	*head;
	t_stack	*previous;
	int		wrdlen;

	head = NULL;
	if (!s || ft_strequ(s, ""))
		return (NULL);
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && ((s - 1)[i]) == c))
		{
			wrdlen = wordlen((char *)&s[i], c);
			word = ft_strsub(s + i, 0, wrdlen);
			if (NULL == (str_to_stack2(&head, &previous, word)))
				return (NULL);
		}
		i++;
	}
	previous->next = NULL;
	return (head);
}
