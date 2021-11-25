/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:00:17 by tromano           #+#    #+#             */
/*   Updated: 2021/11/25 17:35:14 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	t_read	*tab;
	size_t	max;
	size_t	i;
	char	*read_line;

	i = 0;
	max = ft_strlen(tab->line);
	while (tab->line[i])
	{
		if (tab->line[i] == '\n')
		{
			read_line = ft_substr(tab->line, 0, i);
			tab->reste = ft_substr(tab->line, i + 1, max);
			tab->count = i + 1;
		}
		if (tab->line[i] == '\0')
		{
			read_line = ft_substr(tab->line, 0, i);
			tab->reste = NULL;
			tab->count = i;
		}
	}
}
