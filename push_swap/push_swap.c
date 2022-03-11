/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 16:58:16 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stack;

	stack = malloc(sizeof(t_stacks));
	(stack)->b = dlstnew();
	if (argc == 2)
		stack->a = strtodlst(argv[1]);
	if (argc > 2)
		stack->a = dstrtodlst(argv, argc);
	printf("before solve %d\n", (*(int *)stack->a->first->content));
	printf("before solve %d\n", (*(int *)stack->a->first->next->content));
	printf("before solve %d\n", (*(int *)stack->a->last->content));
	threenum(stack);
	printf("%d\n", (*(int *)stack->a->first->content));
	printf("%d\n", (*(int *)stack->a->first->next->content));
	printf("%d\n", (*(int *)stack->a->last->content));
	printf("%s\n", "end");
	return (0);
}
	//dlstclear(&(stack)->a);
	//dlstclear(&(stack)->b);
	//printf("%p\n", stack->a->first->content);
	//printf("%p\n", stack->a->first->next->content);
	//printf("%p\n", stack->a->last->content);