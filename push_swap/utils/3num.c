/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:19:51 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 17:58:30 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threenum(t_stacks *stacks)
{
	t_node	*first;
	t_node	*mid;
	t_node	*last;

	first = stacks->a->first;
	last = stacks->a->last;
	mid = stacks->a->first->next;
	printf("%s\n", "entry solve");
	if (*(int *)first->content > *(int *)mid->content
		&& *(int *)last->content > *(int *)first->content
		&& *(int *)last->content > *(int *)mid->content)
	{
		do_op(stacks, SA);
		printf("%s\n", "entry 1");
	}
	if (*(int *)first->content > *(int *)mid->content
		&& *(int *)first->content > *(int *)last->content
		&& *(int *)mid->content < *(int *)last->content)
	{
		do_op(stacks, RA);
		printf("%s\n", "entry 2");
	}
	if (last->content < first->content
		&& last->content < mid->content
		&& mid->content > first->content)
	{
		do_op(stacks, RRA);
		printf("%s\n", "entry 3");
	}
	if (last->content < mid->content
		&& mid->content < first->content)
	{
		do_op(stacks, SA);
		do_op(stacks, RRA);
		printf("%s\n", "entry 4");
	}
	if (first->content < mid->content
		&& last->content > first->content
		&& last->content < mid->content)
	{
		do_op(stacks, SA);
		do_op(stacks, RA);
		printf("%s\n", "entry 5");
	}
}

	// if (stacks->a->first->content > stacks->a->first->next->content
	// 	&& stacks->a->last->content > stacks->a->first->content
	// 	&& stacks->a->last->content > stacks->a->first->next->content)
	// {
	// 	do_op(stacks, SA);
	// 	printf("%s\n", "entry 1");
	// }
	// if (stacks->a->first->content > stacks->a->first->next->content
	// 	&& stacks->a->first->content > stacks->a->last->content
	// 	&& stacks->a->first->next->content < stacks->a->last->content)
	// {
	// 	do_op(stacks, RA);
	// 	printf("%s\n", "entry 2");
	// }
	// if (stacks->a->last->content < stacks->a->first->content
	// 	&& stacks->a->last->content < stacks->a->first->next->content
	// 	&& stacks->a->first->next->content > stacks->a->first->content)
	// {
	// 	do_op(stacks, RRA);
	// 	printf("%s\n", "entry 3");
	// }
	// if (stacks->a->last->content < stacks->a->first->next->content
	// 	&& stacks->a->first->next->content < stacks->a->first->content)
	// {
	// 	do_op(stacks, SA);
	// 	do_op(stacks, RRA);
	// 	printf("%s\n", "entry 4");
	// }
	// if (stacks->a->first->content < stacks->a->first->next->content
	// 	&& stacks->a->last->content > stacks->a->first->content
	// 	&& stacks->a->last->content < stacks->a->first->next->content)
	// {
	// 	do_op(stacks, SA);
	// 	do_op(stacks, RA);
	// 	printf("%s\n", "entry 5");
	// }
