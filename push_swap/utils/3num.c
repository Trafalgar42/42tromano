/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:19:51 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 17:08:35 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threenum(t_dlist *dl)
{
	if (dl->first->content > dl->first->next->content
		&& dl->last->content > dl->first->content
		&& dl->last->content > dl->first->next->content)
		do_op(dl, "SA");
	if (dl->first->content > dl->first->next->content
		&& dl->first->content > dl->last->content
		&& dl->first->next->content < dl->last->content)
		do_op(dl, "RA");
	if (dl->last->content < dl->first->content
		&& dl->last->content < dl->first->next->content
		&& dl->first->next->content > dl->first->content)
		do_op(dl, "RRA");
	if (dl->last->content < dl->first->next->content
		&& dl->first->next->content < dl->first->content)
	{
		do_op(dl, "SA");
		do_op(dl, "RRA");
	}
	if (dl->first->content < dl->first->next->content
		&& dl->last->content > dl->first->content
		&& dl->last->content < dl->first->next->content)
	{
		do_op(dl, "SA");
		do_op(dl, "RA");
	}
}
