/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstpushfirst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:53:41 by tromano           #+#    #+#             */
/*   Updated: 2022/03/03 15:09:59 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// remplace le premier par le deuxieme et renvoie un noeud 
// ayant un next pointant sur null

#include "push_swap.h"

t_node	*dsltpushfirst(t_dlist *dl)
{
	t_node	*node;

	if (!dl || !dl->first)
		return (NULL);
	node = dl->first;
	if (dl->first == dl->last && node)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->first = dl->first->next;
		dl->first->prev = NULL;
		node->next = NULL;
	}
	while (dl->size)
		dl->size--;
	return (node);
}
