/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:47 by tromano           #+#    #+#             */
/*   Updated: 2022/03/29 16:25:42 by tromano          ###   ########.fr       */
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
		if (arr[i][0] == '-')
			j = 1;
		else
			j = 0;
		while (arr[i][j])
		{
			if (INT_MIN <= ft_atol(arr[i]) && INT_MAX <= ft_atol(arr[i])
				&& ((arr[i][j] <= '9' && '0' <= arr[i][j]) || arr[i][j] == ' '))
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
