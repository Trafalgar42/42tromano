/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:57:20 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_u(va_list va_lst)
{
	unsigned int		print;
	char				*strprint;

	print = va_arg(va_lst, unsigned int);
	strprint = ft_itoa_unsigned(print);
	ft_putstr(strprint);
	return (ft_strlen(strprint));
}
