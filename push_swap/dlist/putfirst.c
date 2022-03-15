/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfirst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:17:52 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 09:50:06 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*putfirst(t_dlist *dl, t_node *node)
{
	if (!node)
		return (0);
	if (!dl)
		dl = dlstnew();
	if (!dl)
		return (0);
	node->prev = NULL;
	node->next = dl->first;
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
	dl->size++;
	return (dl);
}
