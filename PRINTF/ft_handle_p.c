/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 12:53:22 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_p(va_list va_lst)
{
	int		print;
	char	*strprint;

	print = va_arg(va_lst, int);
	strprint = ft_itoa_base(print, 16);
	ft_pustr(strprint);
	return (ft_strlen(strprint));
}
