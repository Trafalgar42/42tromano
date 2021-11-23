/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 14:52:39 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_isconv(const char *s);

int	ft_handle(const char *s, va_list va_lst);

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	va_lst;

	va_start(va_lst, s);
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

	count = 0;
	if (*s == 'c')
		count = ft_handle_c(va_lst);
	if (*s == 's')
		count = ft_handle_s(va_lst);
	if (*s == 'p')
		count = ft_handle_p(va_lst);
	if (*s == 'd')
		count = ft_handle_d(va_lst);
	if (*s == 'i')
		count = ft_handle_i(va_lst);
	if (*s == 'u')
		count = ft_handle_u(va_lst);
	if (*s == 'x')
		count = ft_handle_x(va_lst);
	if (*s == 'X')
		count = ft_handle_xmaj(va_lst);
	if (*s == '%')
		count = ft_handle_percent(va_lst);
	return (count);
}

//int	main(void)
//{
	// char	*str = "holohlo";
	//ft_printf("%s bloblo");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
	// ft_printf("blabli %s bloblo %d boubou %X");
//}
