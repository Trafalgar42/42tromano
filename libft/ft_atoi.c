/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:08:12 by tromano           #+#    #+#             */
/*   Updated: 2021/10/27 14:24:52 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	posneg;

	i = 0;
	res = 0;
	posneg = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			posneg = posneg * -1;
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
	}
	i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (res - '0');
		i++;
	}
	return (res * posneg);
}
