/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freetab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:18:40 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 16:30:25 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
		}
		i++;
	}
	tab[i] = NULL;
	free(tab);
}
