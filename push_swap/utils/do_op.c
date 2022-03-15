/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:01:08 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 15:34:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_stacks *stacks, char *op)
{
	if (!ft_strcmp(op, SA) || !ft_strcmp(op, SS))
	{
		swap(stacks->a);
		printf("SA\n");
	}	
	if (!ft_strcmp(op, SB) || !ft_strcmp(op, SS))
	{
		swap(stacks->b);
		printf("SB\n");
	}
	if (!ft_strcmp(op, PA))
	{
		putfirst(stacks->a, dsltpushfirst(stacks->b));
		printf("PA\n");
	}	
	if (!ft_strcmp(op, PB))
	{
		putfirst(stacks->b, dsltpushfirst(stacks->a));
		printf("PB\n");
	}
	if (!ft_strcmp(op, RA) || !ft_strcmp(op, RR))
	{
		putlast(stacks->a, dsltpushfirst(stacks->a));
		printf("RA\n");
	}	
	if (!ft_strcmp(op, RB) || !ft_strcmp(op, RR))
	{
		putlast(stacks->b, dsltpushfirst(stacks->b));
		printf("RB\n");
	}	
	if (!ft_strcmp(op, RRA) || !ft_strcmp(op, RRR))
	{
		putfirst(stacks->a, dsltpushlast(stacks->a));
		printf("RRA\n");
	}	
	if (!ft_strcmp(op, RRB) || !ft_strcmp(op, RRR))
	{
		putfirst(stacks->b, dsltpushlast(stacks->b));
		printf("RRB\n");
	}
}
