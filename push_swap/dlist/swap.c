/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:13:52 by tromano           #+#    #+#             */
/*   Updated: 2022/03/09 12:20:05 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_dlist *dl)
{
	t_node	*tmp;

	if (dl->size <= 1)
		return ;
	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->content = dl->first->content;
	dl->first->content = dl->first->next->content;
	dl->first->content = tmp->content;
}
