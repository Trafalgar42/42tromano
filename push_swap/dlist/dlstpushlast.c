/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstpushlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:59:57 by tromano           #+#    #+#             */
/*   Updated: 2022/03/03 15:10:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// remplace le dernier par l'avant dernier et renvoie un noeud 
// ayant un next pointant sur null
#include "push_swap.h"

t_node	*dsltpushlast(t_dlist *dl)
{
	t_node	*node;

	if (!dl || !dl->last)
		return (NULL);
	node = dl->last;
	if (dl->first == dl->last && node)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->last = dl->last->prev;
		dl->last->next = NULL;
		node->next = NULL;
	}
	while (dl->size)
		dl->size--;
	return (node);
}
