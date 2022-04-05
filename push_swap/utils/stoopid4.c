/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stoopid4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:22:01 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 21:59:23 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big2smallthree(t_stacks *stacks)
{
	do_op(stacks, SA);
	do_op(stacks, PB);
	do_op(stacks, RA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big2smallfour(t_stacks *stacks)
{
	do_op(stacks, SA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big2smallfive(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, SA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	big3smallfour(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	big3smallfive(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}
