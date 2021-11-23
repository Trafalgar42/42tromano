/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:11:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:25:15 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_x(va_list va_lst)
{
	int		print;
	char	*strprint;

	print = va_arg(va_lst, int);
	strprint = ft_itoa_base_min(print, 16);
	ft_pustr(strprint);
	return (ft_strlen(strprint));
}
