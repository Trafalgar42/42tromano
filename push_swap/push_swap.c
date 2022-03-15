/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 16:36:54 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printstack(t_stacks *stacks)
{
	if (stacks->a)
	{
		printf("a %d\n", (*(int *)stacks->a->first->content));
		printf("a %d\n", (*(int *)stacks->a->first->next->content));
		printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
		printf("a %d\n", (*(int *)stacks->a->last->prev->content));
		printf("a %d\n", (*(int *)stacks->a->last->content));
	}
	if (stacks->b->first->content && stacks->b->last->content)
	{
		printf("b %d\n", (*(int *)stacks->b->first->content));
		printf("b %d\n", (*(int *)stacks->b->first->next->content));
		printf("b %d\n", (*(int *)stacks->b->first->next->next->content));
		printf("b %d\n", (*(int *)stacks->b->last->prev->content));
		printf("b %d\n", (*(int *)stacks->b->last->content));
	}	
}

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
	printf("before solve %d\n", (*(int *)stack->a->first->next->next->content));
	printf("before solve %d\n", (*(int *)stack->a->last->prev->content));
	printf("before solve %d\n", (*(int *)stack->a->last->content));
	if (stack->a->size == 3)
		threenum(stack);
	else if (stack->a->size == 5)
		fivenum(stack);
	printf("%s\n", "end");
	return (0);
}
	//dlstclear(&(stack)->a);
	//dlstclear(&(stack)->b);
	//printf("%p\n", stack->a->first->content);
	//printf("%p\n", stack->a->first->next->content);
	//printf("%p\n", stack->a->last->content);