/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:33:49 by tromano           #+#    #+#             */
/*   Updated: 2021/10/30 16:18:16 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		while (c == s[i])
		{
			if (c != s[i + 1])
				return ((char *)s + i);
			i++;
		}
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (&((char *)s)[i]);
}
