/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:29:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/02 12:46:00 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (i < dstsize - 1 && dst[j] != '\0')
	{
		dst[j] = ((char *)src)[i];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	printf("%zu rep du rat", ft_strlcpy("hololo", "halala", 18));
	//printf("%lu rep du bg", strlcpy("hololo", "halala", 7));
}
