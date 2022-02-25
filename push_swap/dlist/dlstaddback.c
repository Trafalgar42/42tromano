/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstaddback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:59:55 by tromano           #+#    #+#             */
/*   Updated: 2022/02/25 12:03:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Rajoute un noeud a la fin et place avant lui un noeud si il y'en avait un 
// sinon il devient first and last

#include "push_swap.h"

t_dlist	*dlstaddback(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = dlstnew();
	node = malloc(sizeof(t_node));
	if (!node)
		return (dl);
	node->next = NULL;
	node->prev = dl->last;
	node->content = content;
	if (dl->last)
	{
		dl->last->next = node;
		dl->last = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	if (node)
		dl->size++;
	return (dl);
}
