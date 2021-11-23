/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:48:10 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	va_lst;

	count = 0;
	while (*s)
	{
		if (*s == '%')
			s++;
		if (ft_isconv(s))
		{
			ft_handle(s, va_lst);
			count += ft_handle(s, va_lst);
		}
		else
		{
			ft_putchar(s);
			s++;
			count++;
		}
	}
	return (count);
}

int	ft_isconv(const char *s)
{
	return (*s == 'c' || *s == 's' || *s == 'p' || *s == 'd' || *s == 'i'
		|| *s == 'u' || *s == 'x' || *s == 'X' || *s == '%');
}

int	ft_handle(const char *s, va_list va_lst)
{
	int	count;

	if (*s == 'c')
		count = ft_handle_c(va_lst);
	else if (*s == 's')
		count = ft_handle_s(va_lst);
	else if (*s == 'p')
		count = ft_handle_p(va_lst);
	else if (*s == 'd')
		count = ft_handle_d(va_lst);
	else if (*s == 'i')
		count = ft_handle_i(va_lst);
	else if (*s == 'u')
		count = ft_handle_u(va_lst);
	else if (*s == 'x')
		count = ft_handle_x(va_lst);
	else if (*s == 'X')
		count = ft_handle_xmaj(va_lst);
	else if (*s == '%')
		count = ft_handle_percent(va_lst);
	return (count);
}
