/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/02/24 17:51:29 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		*arr = 0;
	int		i;
	int		j;
	int		g;

	tab = 0;
	i = 1;
	j = 0;
	g = 0;
	if (argc == 2)
	{
		tab = ft_split(&argv[i][j], ' ');
	}
	else if (argc > 2)
	{
		while (argv[i])
		{
			arr[g] = ft_atoi(&argv[i]);
			g++;
			i++;
		}
	}
}

		// if (!ft_isdigit(argv[i][j]) || argv[i][j] > 2147483647)
		// {
		// 	write(1, "Error", 6);
		// 	write(1, '\n', 1);
		// 	return (0);
		// }