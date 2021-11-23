/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:00:13 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:08:27 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_d(va_list va_lst)
{
	int		print;
	char	*strprint;

	print = va_arg(va_lst, int);
	strprint = ft_itoa(print);
	ft_pustr(strprint);
	return (ft_strlen(strprint));
}
