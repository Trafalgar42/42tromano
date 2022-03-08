/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:37:41 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 14:07:35 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fivenum(t_stacks *stack)
{
	stack->b->last = dsltpushfirst(stack->a);
	stack->b->first = dsltpushfirst(stack->a);
	threenum(stack->a);
	if (stack->b->last > stack->a->last)
		stack->a->last = dsltpushlast(stack->b);
	if (stack->b->last < stack->a->last)
		stack->a->first = dsltpushfirst(stack->b);
}