/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:41:15 by tromano           #+#    #+#             */
/*   Updated: 2021/12/13 17:40:28 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_inter takes two strings and displays, without doubles, the characters
** that appear in both strings, in the order they appear in the first
** one.
**
** The display will be followed by a \n.
*/

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

static int	ft_instring(const char *s2, char c)
{
	int	i;

	i = 0;
	while (*s2)
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isstart(const char *s1, char c, int len)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	if (i == len)
		return (1);
	return (0);
}

void	ft_inter(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (ft_instring(s2, s1[i]) && ft_isstart(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_inter("123456789", "23456789");
}
