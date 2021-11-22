/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 20:12:39 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	va_lst;
	int		printint;
	char	*printstr;
	int		count;

	va_start(va_lst, s);
	while (*s)
	{
		if (*s == '%' && *s + 1 == ft_isconv(s))
			return (ft_handle(s));
		s++;
	}
}

int	ft_isconv(const char *s)
{
	return (*s == 'c' || *s == 's' || *s == 'p' || *s == 'd' || *s == 'i'
		|| *s == 'u' || *s == 'x' || *s == 'X' || *s == '%');
}

int	ft_handle(const char *s)
{
	if (*s == 'c')
		ft_handle_c(s);
	if (*s == 's')
		ft_handle_s(s);
	if (*s == 'p')
		ft_handle_p(s);
	if (*s == 'd')
		ft_handle_d(s);
	if (*s == 'i')
		ft_handle_i(s);
	if (*s == 'u')
		ft_handle_u(s);
	if (*s == 'x')
		ft_handle_x(s);
	if (*s == 'X')
		ft_handle_X(s);
	if (*s == '%')
		ft_handle_percent(s);
	else
		return (0);
}
