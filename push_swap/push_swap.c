/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/04/05 14:53:59 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;

	if (argc == 1)
		return (0);
	if (argc == 2)
		stack.a = strtodlst(argv[1]);
	else
		stack.a = dstrtodlst(argv, argc);
	stack.b = dlstnew();
	if (!stack.a || !stack.b || !checkdouble(stack.a))
		ft_putstr_fd("Error\n", 2);
	else if (!checkorder(stack.a))
	{
		if (stack.a->size == 3)
			threenum(&stack);
		else if (stack.a->size == 4)
			fournum(&stack);
		else if (stack.a->size == 5)
			fivenum(&stack);
		else
			algosolve(&stack);
	}
	return (0);
}

	// printf("a %d\n", (*(int *)stack.a->first->content));
	// printf("a %d\n", (*(int *)stack.a->first->next->content));
	// //printf("a %d\n", (*(int *)stack.a->first->next->next->content));
	// printf("a %d\n", (*(int *)stack.a->last->prev->content));
	// printf("a %d\n", (*(int *)stack.a->last->content));
// void	printstack(t_stacks *stacks)
// {
// 	if (stacks->a)
// 	{
// 		printf("a %d\n", (*(int *)stacks->a->first->content));
// 		printf("a %d\n", (*(int *)stacks->a->first->next->content));
// 		printf("a %d\n", (*(int *)stacks->a->first->next->next->content));
// 		printf("a %d\n", (*(int *)stacks->a->last->prev->content));
// 		printf("a %d\n", (*(int *)stacks->a->last->content));
// 	}
// 	if (stacks->b->first->content && stacks->b->last->content)
// 	{
// 		printf("b %d\n", (*(int *)stacks->b->first->content));
// 		printf("b %d\n", (*(int *)stacks->b->first->next->content));
// 		printf("b %d\n", (*(int *)stacks->b->first->next->next->content));
// 		printf("b %d\n", (*(int *)stacks->b->last->prev->content));
// 		printf("b %d\n", (*(int *)stacks->b->last->content));
// 	}	
// }