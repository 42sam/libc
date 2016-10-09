/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_mchars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/04 03:33:31 by ssachet           #+#    #+#             */
/*   Updated: 2015/07/04 03:36:07 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t		ft_wordlen(char const *s, int (*isdelim)(char))
{
	size_t			len;

	len = 0;
	while ((*isdelim)(s[len]) == 0 && s[len] != '\0')
		len++;
	return (len);
}

static char			*ft_find_next_word(char const *s, int (*isdelim)(char))
{
	while ((*isdelim)((char)(*s)) == 1)
		s++;
	return ((char *)s);
}

static size_t		ft_count_words(char const *s, int (*isdelim)(char))
{
	size_t			n;

	n = 0;
	s = ft_find_next_word(s, (*isdelim));
	while (*s != '\0')
	{
		n++;
		s = ft_find_next_word(s + ft_wordlen(s, (*isdelim)), (*isdelim));
	}
	return (n);
}

char				**strsplit_mchars(char const *s, int (*isdelim)(char))
{
	char			**split;
	size_t			n_words;
	size_t			len;
	size_t			i;

	if (s == NULL)
		return (NULL);
	n_words = ft_count_words(s, (*isdelim));
	split = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (split == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (n_words-- > 0)
	{
		s = ft_find_next_word(s + len, (*isdelim));
		len = ft_wordlen(s, (*isdelim));
		if ((split[i] = ft_strsub(s, 0, len)) == NULL)
			break ;
		i++;
	}
	split[i] = 0;
	return (split);
}
