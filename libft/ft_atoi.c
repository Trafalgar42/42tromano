/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:08:12 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 18:46:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	posneg;

	i = 0;
	res = 0;
	posneg = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '-')
		{
			posneg = posneg * -1;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * posneg);
}

// int	main(void)
// {
// 	printf("%d, rep 12\n", ft_atoi("-+42"));
// 	printf("%d, rep 13\n", ft_atoi("+-42"));
// 	printf("%d, rep 12 fdp ordi\n", atoi("-+42"));
// 	printf("%d, rep 13 fdp ordi\n", atoi("+-42"));
// }
