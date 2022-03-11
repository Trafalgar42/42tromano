/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:55:30 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 13:47:15 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdouble(t_dlist *dlst)
{
	t_node	*current;
	t_node	*node;

	node = dlst->first;
	while (node->next)
	{
		current = node;
		while (current->next)
		{
			current = current->next;
			if (*((int *)current->content) == (*((int *)node->content)))
				return (0);
		}
		node = node->next;
	}
	return (1);
}
