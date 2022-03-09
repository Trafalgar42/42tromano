/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtodlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:21:57 by tromano           #+#    #+#             */
/*   Updated: 2022/03/09 17:13:14 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dstrtodlst(t_stacks *stacks, char **argstr)
{
	int		i;
	int		*content;

	content = malloc(sizeof(argstr));
	i = 1;
	while (argstr[i])
	{
		*content = ft_atoi(argstr[i]);
		printf("%d\n", *content);
		dlstaddback(stacks->a, content);
		i++;
	}
}

void	strtodlst(t_stacks *stacks, char *str)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(tab));
	tab = ft_split(str, ' ');
	i = 0;
	j = 0;
	while (tab[i][j])
	{
		dlstaddback(stacks->a, (void *)ft_atoi(tab[i]));
		i++;
	}
}
	// while (i < 3)
	// {
	// 	*content = ft_atoi(*tab + i);
	// 	printf("wsh %d\n ", *content);
	// 	
	// 	i++;
	// }