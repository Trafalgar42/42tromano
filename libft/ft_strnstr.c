/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:29:26 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 15:45:40 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	if (s2 > s1)
		return (0);
	while (i < n && s1[i])
	{
		if (s1[i] == s2[i])
			return (&((char *)s2)[i]);
		i++;
	}
	return (0);
}
