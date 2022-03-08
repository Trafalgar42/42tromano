/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3num.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:19:51 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 12:52:43 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threenum(t_dlist *dl)
{
	if (dl->last->content < dl->first->content
		&& dl->last->content < dl->first->next->content)
		dlstaddfront(dl, dl->last->content);
	if (dl->first->content > dl->first->next->content
		&& dl->first->content > dl->last->content)
		dlstaddfront(dl, dl->last->content);
	if (dl->first->content > dl->first->next->content)
	{
		dlstaddfront(dl, dl->first->next->content);
		if (dl->first->next->content > dl->last->content)
			dlstaddback(dl, dl->first->next->content);
	}
}
