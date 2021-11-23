/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_xmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:26:50 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:33:53 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_xmaj(va_list va_lst)
{
	int		print;
	char	*strprint;

	print = va_arg(va_lst, int);
	strprint = ft_itoa_base(print, 16);
	ft_pustr(strprint);
	return (ft_strlen(strprint));
}
