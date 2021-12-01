/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:00:17 by tromano           #+#    #+#             */
/*   Updated: 2021/12/01 15:14:39 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_read	*tab;
	char			*str;
	char			c;

	tab->fd = fd - 1;
	if (fd != tab->fd)
		if (!ft_init(tab, fd))
			return (0);
	c = ft_check(tab);
	while (c)
	{
		str = ft_joint(str, c);
		if (c == '\n')
			return (str);
		c = ft_check(tab);
	}
	return (str);
}
