/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:29:26 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 18:24:00 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (*s2 == '\0' || s2 == NULL)
		return ((char *)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && ((i + j) < n))
		{
			if (s2[j + 1] == '\0')
				return (&((char *)s1)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
