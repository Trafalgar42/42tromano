/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:02:57 by tromano           #+#    #+#             */
/*   Updated: 2022/02/24 18:07:34 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*dlstnew(int n)
{
	t_node	*new_content;

	new_content = malloc(sizeof(t_node));
	if (!new_content)
		return (NULL);
	(*new_content).next = NULL;
	(*new_content).n = n;
	return (new_content);
}
