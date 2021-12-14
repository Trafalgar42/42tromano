/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printeval.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:14:13 by tromano           #+#    #+#             */
/*   Updated: 2021/12/14 14:38:34 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int	printf(char *s, ...)
{
	int	count = 0;
	int i = 0;
	va_list	args;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 's')
				count += handle_s(va_arg(args, char *));
			if (s[i] == 'd')
				count += handle_d(va_arg(args, int));
			if (s[i] == 'x')
				count += putnbr(va_arg(args, unsigned int), 16);
		}
		else
			count += putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int	putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	handle_s(char *s)
{
	int	i = 0;

	if (!s)
		s = "(null)";
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

int	handle_d(int i)
{
	int	count = 0;

	if (i < 0)
	{
		i *= -1;
		count += putchar('-');
	}
	count += putnbr(i, 10);
	return (count);
}

int	putnbr(unsigned int i, int base)
{
	char	*arr = "0123456789abcdef";
	int		count = 0;
	int		n;

	if (i / base != 0)
		count += putnbr(i / base, base);
	n = i % base;
	count += write(1, &arr[n], 1);
	return (count);
}
