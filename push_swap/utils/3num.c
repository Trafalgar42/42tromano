/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:19:51 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 16:50:55 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threesolve(t_stacks *stacks, t_node *first, t_node *mid, t_node *last)
{
	if (*(int *)first->content > *(int *)mid->content
		&& *(int *)last->content > *(int *)first->content
		&& *(int *)last->content > *(int *)mid->content)
		do_op(stacks, SA);
	if (*(int *)first->content > *(int *)mid->content
		&& *(int *)first->content > *(int *)last->content
		&& *(int *)mid->content < *(int *)last->content)
		do_op(stacks, RA);
	if (*(int *)last->content < *(int *)first->content
		&& *(int *)last->content < *(int *)mid->content
		&& *(int *)mid->content > *(int *)first->content)
		do_op(stacks, RRA);
	if (*(int *)last->content < *(int *)mid->content
		&& *(int *)mid->content < *(int *)first->content)
	{
		do_op(stacks, SA);
		do_op(stacks, RRA);
	}
	if (*(int *)first->content < *(int *)mid->content
		&& *(int *)last->content > *(int *)first->content
		&& *(int *)last->content < *(int *)mid->content)
	{
		do_op(stacks, SA);
		do_op(stacks, RA);
	}
}

void	threenum(t_stacks *stacks)
{
	t_node	*first;
	t_node	*mid;
	t_node	*last;

	first = stacks->a->first;
	last = stacks->a->last;
	mid = stacks->a->first->next;
	threesolve(stacks, first, mid, last);
}
