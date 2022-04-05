/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstgetcontent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:34:09 by tromano           #+#    #+#             */
/*   Updated: 2022/04/05 15:45:22 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//retourne le contenu d'un noeud a la position i

#include "push_swap.h"

void	*dlstgetcontent(t_dlist *dl, int i)
{
	t_node	*node;

	if (!dl || dl->size < i)
		return (NULL);
	node = dl->first;
	while (i--)
		node = node->next;
	return (node->content);
}
