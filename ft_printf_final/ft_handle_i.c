/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:09:27 by tromano           #+#    #+#             */
/*   Updated: 2021/11/30 13:25:26 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_i(t_sprint *tab)
{
	int		i;
	char	*printstr;

	i = va_arg(tab->args, int);
	printstr = ft_itoa(i);
	tab->count += ft_putstr(printstr);
	free(printstr);
}
