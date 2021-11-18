/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:31:33 by tromano           #+#    #+#             */
/*   Updated: 2021/11/18 16:08:58 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int		i;
	char	pre_c;

	i = 0;
	pre_c = c;
	while (*s)
	{
		if (pre_c == c && *s != c)
			i++;
		pre_c = *s;
		s++;
	}
	return (i);
}

int	ft_nextcharset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		nextchar;
	int		i;
	char	**str_tab;

	if (!s)
		return (NULL);
	str_tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str_tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		nextchar = ft_nextcharset(s, c);
		if (nextchar)
		{
			str_tab[i] = ft_substr(s, 0, nextchar);
			i++;
			s += nextchar;
		}
		else
			s++;
	}
	str_tab[i] = 0;
	return (str_tab);
}
