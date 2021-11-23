/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:09:27 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:57:08 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_i(va_list va_lst)
{
	int		print;
	char	*strprint;

	print = va_arg(va_lst, int);
	strprint = ft_itoa(print);
	ft_putstr(strprint);
	return (ft_strlen(strprint));
}
