/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:20:15 by tromano           #+#    #+#             */
/*   Updated: 2022/02/17 15:41:51 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_joint(char *s, char c)
{
	char	*str1;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str1 = malloc(len + 2);
	if (!str1)
		return (0);
	while (i < len)
	{
		str1[i] = s[i];
		i++;
	}
	str1[i] = c;
	str1[i + 1] = 0;
	if (s)
		free(s);
	return (str1);
}

int	ft_init(t_read *tab, int fd)
{
	tab->fd = fd;
	tab->pos = 0;
	tab->max = read(tab->fd, tab->str, BUFFER_SIZE);
	if (tab->max <= 0)
		return (0);
	else
		return (1);
}

char	ft_check(t_read *tab)
{
	char	res;

	if (tab->max <= tab->pos)
	{
		tab->pos = 0;
		tab->max = read(tab->fd, tab->str, BUFFER_SIZE);
		if (tab->max <= 0)
			return (0);
	}
	res = tab->str[tab->pos];
	tab->pos++;
	return (res);
}
