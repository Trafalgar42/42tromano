/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:11:18 by tromano           #+#    #+#             */
/*   Updated: 2022/04/05 16:23:24 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algosolve(t_stacks *stacks)
{
	int	count;
	int	chunk_done = 0;
	int	i;
	int	chunk;

	if (stacks->a->size < 100)
		chunk = 20;
	else
		chunk = 70;
	while (stacks->a->size > chunk)
	{
		count = 0;
		while (count < chunk)
		{
			while (*(int *)stacks->a->first->content > chunk * chunk_done)
				do_op(stacks, RA);
			if (*(int *)stacks->a->first->content < chunk * chunk - (chunk / 2))
				do_op(stacks, PA);
			else
			{
				do_op(stacks, PA);
				if (stacks->b->size > 1)
					do_op(stacks, RB);
			}
			count++;
		}
		chunk_done += 1;
	}
	while (stacks->a->size != 0)
		do_op(stacks, PB);
	while (stacks->b->size != 0)
	{
		i = max_index(stacks);
		if (i <= stacks->b->size / 2)
		{
			while (i > 0)
			{
				do_op(stacks, RB);
				--i;
			}
		}
		else
		{
			while (i < stacks->b->size)
			{
				do_op(stacks, RB);
				++i;
			}
			do_op(stacks, PB);
		}
	}
}

int	max_index(t_stacks *stacks)
{
	int		i;
	int		max;
	int		index;
	t_node	*current;
	t_node	*next;

	i = 0;
	current = stacks->b->first;
	max = *(int *)current->content;
	next = stacks->b->first->next;
	while (i < stacks->b->size && next != stacks->b->last->next)
	{
		if (*(int *)next->content > max)
		{
			max = *(int *)next->content;
			current = next;
			index = i;
		}
		next = next->next;
		i++;
	}
	printf("%d\n", i);
	return (index);
}
