/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:26:45 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 15:08:17 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	if (n == 0)
		return (0);
	a = 0;
	while (s1[a] && s2[a] && a < n - 1 && s1[a] == s2[a])
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
