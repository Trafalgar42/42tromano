/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:20:15 by tromano           #+#    #+#             */
/*   Updated: 2021/12/01 13:44:58 by tromano          ###   ########.fr       */
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

char	*ft_joint(char *str, char c)
{
	char	*str1;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	str1 = malloc(sizeof(len + 2));
	while (*str)
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = c;
	str1[i + 1] = 0;
	if (str)
		free(str);
	return (str1);
}

int	ft_init(t_read *tab, int fd)
{
	tab->fd = fd;
	tab->pos = 0;
	tab->max = read(tab->fd, tab->str, BUFFER_SIZE);
	
}
