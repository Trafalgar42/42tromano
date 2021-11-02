/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:24 by tromano           #+#    #+#             */
/*   Updated: 2021/11/02 17:16:33 by tromano          ###   ########.fr       */
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
	if (i >= dstsize || a >= i)
		res = i + a;
	// else if (dstsize > i)
	// 	return (0);
	else
		res = i;
	while (src[a] && dstsize > i)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[a];
		a++;
		i++;
	}
	return (res);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	res;
// 	size_t	len_src;
// 	size_t	len_dst;

// 	i = 0;
// 	str = (char *)src;
// 	len_src = ft_strlen(src);
// 	len_dst = ft_strlen(dst);
// 	if (src == 0)
// 		return (0);
// 	if (len_dst > dstsize)
// 		res = len_dst + len_src;
// 	else
// 		res = len_src + dstsize;
// 	while (str[i] && len_dst < dstsize)
// 	{
// 		dst[len_dst] = str[i];
// 		len_dst++;
// 		i++;
// 	}
// 	dst[len_dst] = '\0';
// 	return (res);
// }

// int	main(void)
// {
// 	char	dest[20];

// 	printf("%lu\n", ft_strlcat(dest, "holala34fqr2f2", 234));
// 	printf("%zu\n ", strlcat(dest, "holala34fqr2f2", 234));
// }
