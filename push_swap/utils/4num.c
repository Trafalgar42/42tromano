/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:12:34 by tromano           #+#    #+#             */
/*   Updated: 2022/04/01 15:35:46 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fournum(t_stacks *stacks)
{
	if (onesmallest2(stacks))
		do_op(stacks, PB);
	else if (twosmallest2(stacks))
	{
		do_op(stacks, SA);
		do_op(stacks, PB);
	}
	else if (threesmallest2(stacks))
	{
		do_op(stacks, RA);
		do_op(stacks, RA);
		do_op(stacks, PB);
	}
	else if (foursmallest2(stacks))
	{
		do_op(stacks, RRA);
		do_op(stacks, PB);
	}
	if (!checkorder(stacks->a))
	{
		printf("not ordered\n");
		threenum(stacks);
	}
	do_op(stacks, PA);
}

int	onesmallest2(t_stacks *stacks)
{
	t_node	*one;
	t_node	*two;
	t_node	*three;
	t_node	*four;
	t_node	*five;

	one = stacks->a->first;
	two = stacks->a->first->next;
	three = stacks->a->first->next->next;
	four = stacks->a->last->prev;
	five = stacks->a->last;
	if (*(int *)one->content < *(int *)two->content
		&& *(int *)one->content < *(int *)three->content
		&& *(int *)one->content < *(int *)four->content)
		return (1);
	else
		return (0);
}

int	twosmallest2(t_stacks *stacks)
{
	t_node	*one;
	t_node	*two;
	t_node	*three;
	t_node	*four;
	t_node	*five;

	one = stacks->a->first;
	two = stacks->a->first->next;
	three = stacks->a->first->next->next;
	four = stacks->a->last->prev;
	five = stacks->a->last;
	if (*(int *)two->content < *(int *)one->content
		&& *(int *)two->content < *(int *)three->content
		&& *(int *)two->content < *(int *)four->content)
		return (1);
	else
		return (0);
}

int	threesmallest2(t_stacks *stacks)
{
	t_node	*one;
	t_node	*two;
	t_node	*three;
	t_node	*four;
	t_node	*five;

	one = stacks->a->first;
	two = stacks->a->first->next;
	three = stacks->a->first->next->next;
	four = stacks->a->last->prev;
	five = stacks->a->last;
	if (*(int *)three->content < *(int *)two->content
		&& *(int *)three->content < *(int *)one->content
		&& *(int *)three->content < *(int *)four->content)
		return (1);
	else
		return (0);
}

int	foursmallest2(t_stacks *stacks)
{
	t_node	*one;
	t_node	*two;
	t_node	*three;
	t_node	*four;
	t_node	*five;

	one = stacks->a->first;
	two = stacks->a->first->next;
	three = stacks->a->first->next->next;
	four = stacks->a->last->prev;
	five = stacks->a->last;
	if (*(int *)four->content < *(int *)two->content
		&& *(int *)four->content < *(int *)three->content
		&& *(int *)four->content < *(int *)one->content)
		return (1);
	else
		return (0);
}
