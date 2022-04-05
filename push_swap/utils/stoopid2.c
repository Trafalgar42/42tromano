/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stoopid2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:22:01 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 21:49:19 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small2bigthree(t_stacks *stacks)
{
	do_op(stacks, SA);
	do_op(stacks, PB);
	do_op(stacks, RA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	small2bigfour(t_stacks *stacks)
{
	do_op(stacks, SA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	small2bigfive(t_stacks *stacks)
{
	do_op(stacks, SA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	small3bigfour(t_stacks *stacks)
{
	do_op(stacks, RA);
	do_op(stacks, RA);
	do_op(stacks, PB);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, RA);
	do_op(stacks, PA);
}

void	small3bigfive(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}
