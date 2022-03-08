/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syracause.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:49:04 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 10:56:01 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	unsigned int	res;

	res = 0;
	if (argc != 2)
		return (printf("%s", "Un entier uniquement"));
	else
		res = atoi(argv[1]);
	while ()
	{
		if (res % 2 != 0)
		{
			res = res * 3;
			res += 1;
		}
		else
	}
}
