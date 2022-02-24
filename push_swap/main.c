/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:49:58 by tromano           #+#    #+#             */
/*   Updated: 2022/02/24 18:00:10 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	tab = 0;
	if (argc == 2)
	{
		tab = ft_split(&argv[1], ' ');
	}
	else if (argc > 2)
	{
		while (argv[i])
		{
			
			 = ft_atoi(&argv[i]);
		}
	}
}

		// if (!ft_isdigit(argv[i][j]) || argv[i][j] > 2147483647)
		// {
		// 	write(1, "Error", 6);
		// 	write(1, '\n', 1);
		// 	return (0);
		// }