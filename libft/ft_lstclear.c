/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:10:11 by tromano           #+#    #+#             */
/*   Updated: 2021/11/11 16:40:19 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swap;

	if (*lst)
	{
		while (*lst)
		{
			swap = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = swap;
		}
	}
}
