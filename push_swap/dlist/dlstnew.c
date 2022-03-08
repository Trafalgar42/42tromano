/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:02:57 by tromano           #+#    #+#             */
/*   Updated: 2022/02/25 15:13:43 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*dlstnew(void)
{
	t_dlist	*new_content;

	new_content = malloc(sizeof(t_dlist));
	if (!new_content)
		return (NULL);
	(*new_content).size = 0;
	(*new_content).last = NULL;
	(*new_content).first = NULL;
	return (new_content);
}
