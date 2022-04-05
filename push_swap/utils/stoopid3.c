/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stoopid3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:22:01 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 21:53:21 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small4bigfive(t_stacks *stacks)
{
	do_op(stacks, RRA);
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big1smalltwo(t_stacks *stacks)
{
	do_op(stacks, PB);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big1smallthree(t_stacks *stacks)
{
	do_op(stacks, PB);
	do_op(stacks, RA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big1smallfour(t_stacks *stacks)
{
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}

void	big1smallfive(t_stacks *stacks)
{
	do_op(stacks, PB);
	do_op(stacks, RRA);
	do_op(stacks, PB);
	threenum(stacks);
	do_op(stacks, PA);
	do_op(stacks, PA);
	do_op(stacks, RA);
}
