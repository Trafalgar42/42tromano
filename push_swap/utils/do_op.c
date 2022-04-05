/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:01:08 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 14:10:09 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_stacks *stacks, char *op)
{
	if (!ft_strcmp(op, SA))
	{
		swap(stacks->a);
		write(1, "sa\n", 3);
	}	
	if (!ft_strcmp(op, SB))
	{
		swap(stacks->b);
		write(1, "sb\n", 3);
	}	
	if (!ft_strcmp(op, PA))
	{
		putfirst(stacks->a, dsltpushfirst(stacks->b));
		write(1, "pa\n", 3);
	}	
	if (!ft_strcmp(op, PB))
	{
		putfirst(stacks->b, dsltpushfirst(stacks->a));
		write(1, "pb\n", 3);
	}
	if (!ft_strcmp(op, RA))
	{
		putlast(stacks->a, dsltpushfirst(stacks->a));
		write(1, "ra\n", 3);
	}
	if (!ft_strcmp(op, RB))
	{
		putlast(stacks->b, dsltpushfirst(stacks->b));
		write(1, "rb\n", 3);
	}	
	if (!ft_strcmp(op, RRA))
	{
		putfirst(stacks->a, dsltpushlast(stacks->a));
		write(1, "rra\n", 4);
	}	
	if (!ft_strcmp(op, RRB))
	{
		putfirst(stacks->b, dsltpushlast(stacks->b));
		write(1, "rrb\n", 4);
	}	
	if (!ft_strcmp(op, SS))
	{
		swap(stacks->a);
		swap(stacks->b);
		write(1, "ss\n", 3);
	}
	if (!ft_strcmp(op, RRR))
	{
		putfirst(stacks->a, dsltpushlast(stacks->a));
		putfirst(stacks->b, dsltpushlast(stacks->b));
		write(1, "rrr\n", 4);
	}
	if (!ft_strcmp(op, RR))
	{
		putlast(stacks->b, dsltpushfirst(stacks->b));
		putlast(stacks->a, dsltpushfirst(stacks->a));
		write(1, "rr\n", 3);
	}
}
