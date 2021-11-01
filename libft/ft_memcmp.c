/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:37:05 by tromano           #+#    #+#             */
/*   Updated: 2021/11/01 16:11:47 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	if (n == 0)
		return (0);
	a = 0;
	while (((unsigned char *)s1)[a] && ((unsigned char *)s2)[a]
		&& (a < n - 1) && ((unsigned char *)s1)[a] == ((unsigned char *)s2)[a])
	{
		a++;
	}
	return ((((unsigned char *)s1)[a]) - (((unsigned char *)s2)[a]));
}
