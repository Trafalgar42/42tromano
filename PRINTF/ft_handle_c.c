/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:54:06 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 12:46:32 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_c(va_list va_lst)
{
	int		count;
	char	*print;

	count = 1;
	print = va_arg(va_lst, char *);
	ft_putchar(print);
	return (count);
}
