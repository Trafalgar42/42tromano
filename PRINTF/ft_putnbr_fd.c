/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:36:54 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 15:19:05 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{	
		write(fd, "-", 1);
		if (n < -9)
			ft_putnbr_fd(n / -10, fd);
		c = '0' - n % 10;
		write(fd, &c, 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}	
	if (n >= 0)
	{
		c = '0';
		c = c + (n % 10);
		write(fd, &c, 1);
	}
}
