/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/30 14:49:19 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_u(t_sprint *tab)
{
	char			*strprint;
	unsigned int	num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_unsigned(num);
	tab->count += ft_putstr(strprint);
	free(strprint);
}
