/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:50:27 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 09:51:27 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*putlast(t_dlist *dl, t_node *node)
{
	if (!node)
		return (0);
	if (!dl)
		dl = dlstnew();
	if (!dl)
		return (0);
	node->prev = dl->last;
	node->next = NULL;
	if (dl->first)
	{
		dl->last->next = node;
		dl->last = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	dl->size++;
	return (dl);
}
