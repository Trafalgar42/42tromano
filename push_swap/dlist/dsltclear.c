/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsltclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:51:00 by tromano           #+#    #+#             */
/*   Updated: 2022/03/09 15:46:30 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libere la memoire de tous les noeuds et de la double liste

#include "push_swap.h"

void	dlstclear(t_dlist **dl)
{
	t_node	*current;
	t_node	*next;

	if (!*dl)
		return ;
	current = (*dl)->first;
	while (current->next)
	{
		next = current->next;
		free(&(current)->content);
		free(&current);
		current = next;
	}
	free(*dl);
	*dl = NULL;
}
