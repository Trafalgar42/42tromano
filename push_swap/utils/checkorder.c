/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkorder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:10:28 by tromano           #+#    #+#             */
/*   Updated: 2022/03/11 14:06:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkorder(t_dlist *dl)
{
	t_node	*current;

	current = dl->first;
	while (current->next)
	{
		if (*((int *)current->content) > (*(int *)current->next->content))
			return (0);
		current = current->next;
	}
	return (1);
}
