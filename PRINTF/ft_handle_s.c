/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:07:21 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 20:25:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_s(const char *s, va_list va_lst)
{
	char	*printstr;

	printstr = va_arg(va_lst, char *);
	ft_putstr_count(printstr);
}
