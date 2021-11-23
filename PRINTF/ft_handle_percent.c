/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:28:11 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:30:56 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_percent(va_list va_lst)
{
	int		count;
	char	*print;

	count = 1;
	print = va_arg(va_lst, char *);
	ft_putchar(print);
	return (count);
}
