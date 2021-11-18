/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:24 by tromano           #+#    #+#             */
/*   Updated: 2021/11/18 16:10:07 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	res;

	i = ft_strlen(dst);
	a = ft_strlen(src);
	if (dstsize == 0)
		return (a);
	if (i <= dstsize)
		res = i + a;
	else
		res = a + dstsize;
	a = 0;
	while (src[a] && dstsize - 1 > i + a)
	{
		((unsigned char *)dst)[i + a] = ((unsigned char *)src)[a];
		a++;
	}
	dst[i + a] = '\0';
	return (res);
}
