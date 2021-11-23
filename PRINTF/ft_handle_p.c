/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 17:59:40 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_p(void *ptr)
{
	int	count;

	write(1, "X0", 2);
	ptr = ft_itoa_base((int)ptr, 16);
	ft_putstr(ptr);
	count = ft_strlen(ptr) + 2;
	return (count);
}
