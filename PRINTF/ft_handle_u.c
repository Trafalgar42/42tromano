/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 17:41:59 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_u(unsigned int num)
{
	char		*strprint;
	int			count;

	strprint = ft_itoa_unsigned(num);
	ft_putstr(strprint);
	count = ft_strlen(strprint);
	return (count);
}
