/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:37:05 by tromano           #+#    #+#             */
/*   Updated: 2021/11/03 12:47:45 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if ((!s1 && !s2) || n == 0)
		return (0);
	i = 0;
	j = 0;
	while (n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[j])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[j]);
		i++;
		j++;
		n--;
	}
	return (0);
}
