/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstaddfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:02:51 by tromano           #+#    #+#             */
/*   Updated: 2022/02/25 12:02:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Rajoute un noeud au debut et place a sa suite un noeud si il y'en avait un 
// sinon il devient first and last

#include "push_swap.h"

t_dlist	*dlstaddfront(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = dlstnew();
	node = malloc(sizeof(t_node));
	if (!node)
		return (dl);
	node->next = dl->first ;
	node->prev = NULL;
	node->content = content;
	if (dl->first)
	{
		dl->first->prev = node;
		dl->first = node;
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
