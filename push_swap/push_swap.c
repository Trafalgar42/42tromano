/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/03/09 18:08:39 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stack;

	stack = malloc(sizeof(t_stacks));
	(stack)->a = dlstnew();
	(stack)->b = dlstnew();
	if (argc == 2)
		strtodlst(stack, argv[1]);
	else if (argc > 2)
		dstrtodlst(stack, argv);
	threenum(stack->a, stack);
	printf("%zu\n", stack->a->size);
	printf("%s\n", "end");
	return (0);
}
	//dlstclear(&(stack)->a);
	//dlstclear(&(stack)->b);
	//printf("%p\n", stack->a->first->content);
	//printf("%p\n", stack->a->first->next->content);
	//printf("%p\n", stack->a->last->content);