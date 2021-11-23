/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:11:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 17:43:04 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_x(int num)
{
	char	*strprint;
	int		count;

	strprint = ft_itoa_base_min(num, 16);
	ft_putstr(strprint);
	count = ft_strlen(strprint);
	return (count);
}
