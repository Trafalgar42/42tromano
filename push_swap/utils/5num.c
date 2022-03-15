/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:37:41 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 16:37:21 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushsmallest(t_stacks *stacks)
{
	if (onesmallest(stacks))
		do_op(stacks, PB);
	if (twosmallest(stacks))
	{
		do_op(stacks, SA);
		do_op(stacks, PB);
	}
	if (threesmallest(stacks))
	{
		do_op(stacks, RA);
		do_op(stacks, RA);
		do_op(stacks, PB);
	}
	if (foursmallest(stacks))
	{
		do_op(stacks, RRA);
		do_op(stacks, RRA);
		do_op(stacks, PB);
	}
	if (fivesmallest(stacks))
	{
		do_op(stacks, RRA);
		do_op(stacks, PB);
	}
}

void	fivenum(t_stacks *stacks)
{
	printf("%s\n", "entry solve 5");
	pushsmallest(stacks);
	pushsmallest(stacks);
	printf("b %d\n", (*(int *)stacks->b->first->content));
	printf("b %d\n", (*(int *)stacks->b->first->next->content));
	printf("a %d\n", (*(int *)stacks->a->first->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	printf("a %d\n", (*(int *)stacks->a->last->content));
	threenum(stacks);
	printf("a %d\n", (*(int *)stacks->a->first->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	printf("a %d\n", (*(int *)stacks->a->last->content));
	do_op(stacks, PA);
	do_op(stacks, PA);
	printf("a %d\n", (*(int *)stacks->a->first->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->content));
	printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	printf("a %d\n", (*(int *)stacks->a->last->content));
}
