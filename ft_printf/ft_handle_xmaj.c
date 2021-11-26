/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_xmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:26:50 by tromano           #+#    #+#             */
/*   Updated: 2021/11/26 17:37:46 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_xmaj(t_sprint *tab)
{
	char				*strprint;
	unsigned int		num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_base(num, 16);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
	free(strprint);
}
