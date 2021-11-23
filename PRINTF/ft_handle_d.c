/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:00:13 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 17:58:27 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_d(int num)
{
	char	*strprint;
	int		count;

	strprint = ft_itoa(num);
	ft_putstr(strprint);
	count = ft_strlen(strprint);
	return (count);
}
