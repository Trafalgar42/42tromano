/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:13:52 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 17:55:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_dlist *dl)
{
	void	*tmp;

	printf("entry swap\n");
	if (dl->size < 2)
		return ;
	tmp = dl->first->content;
	dl->first->content = dl->first->next->content;
	dl->first->next->content = tmp;
	printf("swap %d\n", (*(int *)dl->first->content));
	printf("swap %d\n", (*(int *)dl->first->next->content));
	printf("swap %d\n", (*(int *)dl->last->content));
	printf("end swap\n");
}
