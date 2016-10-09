/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:18:01 by ssachet           #+#    #+#             */
/*   Updated: 2015/12/28 02:49:56 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		print_dictionary(t_list *env)
{
	char *value;

	if (!env)
		return (-1);
	ft_printf("[blue]");
	while (env)
	{
		value = (ft_strequ(env->value, "")) ? makestr("") : env->value;
		ft_printf("%s=%s\n", env->name, value);
		env = env->next;
	}
	ft_printf("[eoc]");
	return (0);
}

int		print_stack(t_stack *node, int fd)
{
	int i;

	i = 0;
	if (!node)
	{
		/* won't display a \n before percent */
		ft_printf("%Fs",fd,"\n");
		return (-1);
	}
	ft_printf("[blue]%Fs",fd, "");
	while (node)
	{
		if (i != 0)
		{
			/* won't display a " " before or after percent*/
			ft_printf("%Fs", fd, " ");
			ft_printf("%Fi", fd, node->nb);
		}
		else
			ft_printf("%Fi", fd, node->nb);
		i = 1;
		node = node->next;
	}
	ft_printf("%Fs",fd,"\n");
	ft_printf("[eoc]%Fs",fd,"");
	return (0);
}
