/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:01:08 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 15:59:51 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_stacks *stacks, char *op)
{
	if (!ft_strcmp(op, "SA") || !ft_strcmp(op, "SS"))
		swap(stacks->a);
	if (!ft_strcmp(op, "SB") || !ft_strcmp(op, "SS"))
		swap(stacks->b);
	if (!ft_strcmp(op, "PA"))
		dlstaddfront(stacks->a, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, "PB"))
		dlstaddfront(stacks->b, dsltpushfirst(stacks->b));
	if (!ft_strcmp(op, "RA") || !ft_strcmp(op, "RR"))
		dlstaddfront(stacks->a, dsltpushlast(stacks->a));
	if (!ft_strcmp(op, "RB") || !ft_strcmp(op, "RR"))
		dlstaddfront(stacks->b, dsltpushlast(stacks->b));
	if (!ft_strcmp(op, "RRA") || !ft_strcmp(op, "RRR"))
		dlstaddlast(stacks->a, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, "RRB") || !ft_strcmp(op, "RRR"))
		dlstaddlast(stacks->b, dsltpushfirst(stacks->b));
}
