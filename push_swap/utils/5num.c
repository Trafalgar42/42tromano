/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:37:41 by tromano           #+#    #+#             */
/*   Updated: 2022/04/01 12:16:44 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fivenum(t_stacks *stacks)
{
	if (onesmallest(stacks) && twobiggest(stacks))
		small1bigtwo(stacks);
	else if (onesmallest(stacks) && threebiggest(stacks))
		small1bigthree(stacks);
	else if (onesmallest(stacks) && fourbiggest(stacks))
		small1bigfour(stacks);
	else if (onesmallest(stacks) && fivebiggest(stacks))
		small1bigfive(stacks);
	else if (twosmallest(stacks) && threebiggest(stacks))
		small2bigthree(stacks);
	else if (twosmallest(stacks) && fourbiggest(stacks))
		small2bigfour(stacks);
	else if (twosmallest(stacks) && fivebiggest(stacks))
		small2bigfive(stacks);
	else if (threesmallest(stacks) && fourbiggest(stacks))
		small3bigfour(stacks);
	else if (threesmallest(stacks) && fivebiggest(stacks))
		small3bigfive(stacks);
	else if (foursmallest(stacks) && fivebiggest(stacks))
		small4bigfive(stacks);
	else
		bigandsmall(stacks);
}

void	bigandsmall(t_stacks *stacks)
{
	if (onebiggest(stacks) && twosmallest(stacks))
		big1smalltwo(stacks);
	else if (onebiggest(stacks) && threesmallest(stacks))
		big1smalltwo(stacks);
	else if (onebiggest(stacks) && foursmallest(stacks))
		big1smalltwo(stacks);
	else if (onebiggest(stacks) && fivesmallest(stacks))
		big1smalltwo(stacks);
	else if (twobiggest(stacks) && threesmallest(stacks))
		big2smallthree(stacks);
	else if (twobiggest(stacks) && foursmallest(stacks))
		big2smallfour(stacks);
	else if (twobiggest(stacks) && fivesmallest(stacks))
		big2smallfive(stacks);
	else if (threebiggest(stacks) && foursmallest(stacks))
		big3smallfour(stacks);
	else if (threebiggest(stacks) && fivesmallest(stacks))
		big3smallfive(stacks);
	else if (fourbiggest(stacks) && fivesmallest(stacks))
		big4smallfive(stacks);
	else
		return ;
}

void	big4smallfive(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

// void	pushbiggest(t_stacks *stacks)
// {
// 	if (onebiggest(stacks))
// 		do_op(stacks, PB);
// 	else if (twobiggest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 	}
// 	else if (threebiggest(stacks))
// 	{
// 		do_op(stacks, RA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 	}
// 	else if (fourbiggest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 	}
// 	else if (fivebiggest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 	}
// }
// void	pushsmallest2(t_stacks *stacks)
// {
// 	if (onesmallest2(stacks))
// 		do_op(stacks, PB);
// 	else if (twosmallest2(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 	}
// 	else if (threesmallest2(stacks))
// 	{
// 		do_op(stacks, RA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 	}
// 	else if (foursmallest2(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 	}
// }
	// printf("b %d\n", (*(int *)stacks->b->first->content));
	// printf("b %d\n", (*(int *)stacks->b->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
// printf("a %d\n", (*(int *)stacks->a->first->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	// printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	// printf("a %d\n", (*(int *)stacks->a->last->content));
// printf("a %d\n", (*(int *)stacks->a->first->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	// printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	// printf("a %d\n", (*(int *)stacks->a->last->content));
// printf("b %d\n", (*(int *)stacks->b->first->content));
	// printf("b %d\n", (*(int *)stacks->b->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->content));
	// printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
	// printf("a %d\n", (*(int *)stacks->a->last->prev->content));
	// printf("a %d\n", (*(int *)stacks->a->last->content));

// void	pushtwosmallest(t_stacks *stacks)
// {
// 	if (onesmallest(stacks) && twobiggest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (onesmallest(stacks) && threebiggest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (onesmallest(stacks) && fourbiggest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (onesmallest(stacks) && fivebiggest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (twosmallest(stacks) && threebiggest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (twosmallest(stacks) && fourbiggest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (twosmallest(stacks) && fivebiggest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (threesmallest(stacks) && fourbiggest(stacks))
// 	{
// 		do_op(stacks, RA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (threesmallest(stacks) && fivebiggest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (foursmallest(stacks) && fivebiggest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (onebiggest(stacks) && twosmallest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (onebiggest(stacks) && threesmallest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (onebiggest(stacks) && foursmallest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (onebiggest(stacks) && fivesmallest(stacks))
// 	{
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (twobiggest(stacks) && threesmallest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (twobiggest(stacks) && foursmallest(stacks))
// 	{
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 	}
// 	else if (twobiggest(stacks) && fivesmallest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, SA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (threebiggest(stacks) && foursmallest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (threebiggest(stacks) && fivesmallest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// 	else if (fourbiggest(stacks) && fivesmallest(stacks))
// 	{
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		do_op(stacks, RRA);
// 		do_op(stacks, PB);
// 		threenum(stacks);
// 		do_op(stacks, PA);
// 		do_op(stacks, RA);
// 		do_op(stacks, PA);
// 	}
// }
