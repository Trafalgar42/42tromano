/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:01:08 by tromano           #+#    #+#             */
/*   Updated: 2022/03/16 09:40:47 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_stacks *stacks, char *op)
{
	if (!ft_strcmp(op, SA) || !ft_strcmp(op, SS))
		swap(stacks->a);
	if (!ft_strcmp(op, SB) || !ft_strcmp(op, SS))
		swap(stacks->b);
	if (!ft_strcmp(op, PA))
		putfirst(stacks->a, dsltpushfirst(stacks->b));
	if (!ft_strcmp(op, PB))
		putfirst(stacks->b, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, RA) || !ft_strcmp(op, RR))
		putlast(stacks->a, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, RB) || !ft_strcmp(op, RR))
		putlast(stacks->b, dsltpushfirst(stacks->b));
	if (!ft_strcmp(op, RRA) || !ft_strcmp(op, RRR))
		putfirst(stacks->a, dsltpushlast(stacks->a));
	if (!ft_strcmp(op, RRB) || !ft_strcmp(op, RRR))
		putfirst(stacks->b, dsltpushlast(stacks->b));
}
