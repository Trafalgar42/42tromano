/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushbiggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:13:53 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 22:14:20 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	onebiggest(t_stacks *stacks)
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
	if (*(int *)one->content > *(int *)two->content
		&& *(int *)one->content > *(int *)three->content
		&& *(int *)one->content > *(int *)four->content
		&& *(int *)one->content > *(int *)five->content)
		return (1);
	else
		return (0);
}

int	twobiggest(t_stacks *stacks)
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
	if (*(int *)two->content > *(int *)one->content
		&& *(int *)two->content > *(int *)three->content
		&& *(int *)two->content > *(int *)four->content
		&& *(int *)two->content > *(int *)five->content)
		return (1);
	else
		return (0);
}

int	threebiggest(t_stacks *stacks)
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
	if (*(int *)three->content > *(int *)two->content
		&& *(int *)three->content > *(int *)one->content
		&& *(int *)three->content > *(int *)four->content
		&& *(int *)three->content > *(int *)five->content)
		return (1);
	else
		return (0);
}

int	fourbiggest(t_stacks *stacks)
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
	if (*(int *)four->content > *(int *)two->content
		&& *(int *)four->content > *(int *)three->content
		&& *(int *)four->content > *(int *)one->content
		&& *(int *)four->content > *(int *)five->content)
		return (1);
	else
		return (0);
}

int	fivebiggest(t_stacks *stacks)
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
	if (*(int *)five->content > *(int *)two->content
		&& *(int *)five->content > *(int *)three->content
		&& *(int *)five->content > *(int *)four->content
		&& *(int *)five->content > *(int *)one->content)
		return (1);
	else
		return (0);
}
