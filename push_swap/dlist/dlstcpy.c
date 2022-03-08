/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:28:59 by tromano           #+#    #+#             */
/*   Updated: 2022/02/25 15:28:36 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copie tous les noeuds en appliquant la fonction f a leurs contenu
// retourne une t_dlist qui pointe sur le premier et dernier de cette new liste

#include "push_swap.h"

t_dlist	*dlstcpy(t_dlist *dl, void *(*f)(void *))
{
	t_node	*node;
	t_dlist	*dlist;

	if (!dl || !f)
		return (NULL);
	dlist = dlistnew();
	if (!dlist)
		return (NULL);
	if (!dl->size)
		return (dlist);
	node = dlist->first;
	while (node)
	{
		dlstaddback(dlist, f(node->content));
		node = node->next;
	}
	return (dlist);
}
