/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtodlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:21:57 by tromano           #+#    #+#             */
/*   Updated: 2022/04/01 11:55:13 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*dstrtodlst(char **argstr, int argc)
{
	t_dlist	*dl;
	int		*content;
	int		i;

	if (!checkarg(argstr, 1))
	{
		return (0);
	}
	dl = dlstnew();
	i = 0;
	while (++i < argc)
	{
		content = malloc(sizeof(int));
		if (!content)
			return (NULL);
		*content = ft_atoi(argstr[i]);
		dlstaddback(dl, content);
	}
	if (!dl || !content)
		dlstclear(&dl);
	return (dl);
}

t_dlist	*strtodlst(char *str)
{
	char	**tab;
	t_dlist	*dl;
	int		*content;
	int		i;

	tab = ft_split(str, ' ');
	if (!checkarg(tab, 0))
	{
		freetab(tab);
		return (0);
	}
	dl = dlstnew();
	i = -1;
	while (tab[++i])
	{
		content = malloc(sizeof(int));
		if (!content)
			return (NULL);
		*content = ft_atoi(tab[i]);
		dlstaddback(dl, content);
	}
	if (!dl || !content)
		dlstclear(&dl);
	freetab(tab);
	return (dl);
}
