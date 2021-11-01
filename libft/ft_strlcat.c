/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:24 by tromano           #+#    #+#             */
/*   Updated: 2021/10/30 16:32:00 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	b;
	size_t	a;

	a = 0;
	b = 0;
	dst_size = ft_strlen((const char *)dst);
	src_size = ft_strlen(src);
	while (b < dst_size)
		b++;
	while (a < src_size)
	{
		dst[b] = ((char *)src)[a];
		b++;
		a++;
	}
	dst[b] = '\0';
	return (dstsize + src_size);
}

// int	main(void)
// {
// 	printf("%lu\n", ft_strlcat("holo", "holala", 16));
// 	printf("%zu\n ", strlcat("holo", "holala", 5));
// }
