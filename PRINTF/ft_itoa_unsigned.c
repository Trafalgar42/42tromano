/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:30:45 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 14:32:29 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_lenleen(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_convert(unsigned int num, size_t len, char *str)
{
	while (num > 0)
	{
		str[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (str);
}

char	*ft_itoa(unsigned int n)
{
	size_t				len;
	unsigned int		num;
	char				*str;

	len = ft_lenleen(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	str = ft_convert(num, len, str);
	return (str);
}
