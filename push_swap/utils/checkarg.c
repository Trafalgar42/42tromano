/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:47 by tromano           #+#    #+#             */
/*   Updated: 2022/03/31 14:13:43 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkarg(char **arr, int i)
{
	int	j;

	if (!arr)
		return (0);
	while (arr[i])
	{
		if (arr[i][0] == '-' && ft_isdigit(arr[i][1]))
			j = 1;
		else
		{
			j = 0;
		}
		while (arr[i][j])
		{
			if (((arr[i][j] <= '9' && arr[i][j] >= '0') || arr[i][j] == ' ')
				&& (INT_MIN <= ft_atol(arr[i]) && INT_MAX >= ft_atol(arr[i])))
				j++;
			else
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
