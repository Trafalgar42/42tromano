/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:29:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 14:00:29 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	j = 0;
	while (j < dstsize - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	printf("%zu rep du rat", ft_strlcpy("hololo", "halala", 18));
// 	//printf("%lu rep du bg", strlcpy("hololo", "halala", 7));
// }
