/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_xmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:26:50 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 17:57:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_xmaj(int num)
{
	int		count;
	char	*strprint;

	strprint = ft_itoa_base(num, 16);
	ft_putstr(strprint);
	count = ft_strlen(strprint);
	return (count);
}
