/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:20:15 by tromano           #+#    #+#             */
/*   Updated: 2021/11/30 18:13:17 by tromano          ###   ########.fr       */
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
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) + 2;
	new = malloc(sizeof(len));
	while (c)
	{
		
	}
}
