/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:20:15 by tromano           #+#    #+#             */
/*   Updated: 2021/11/25 17:45:41 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	dlen;
	char	*d;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	dlen = ft_strlen(s) - start;
	if (len < dlen)
		dlen = len;
	else if (dlen < 0)
		dlen = 0;
	d = malloc(sizeof(char) * (dlen + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s + start, dlen + 1);
	return (d);
}

char	*ft_strdup(const char *s)
{
	char	*dest;

	if (*s == 0 && s == 0)
		return (0);
	dest = 0;
	if (dest < s)
	{
		dest = malloc((sizeof(char) * ft_strlen(s)) + 1);
		if (!dest)
			return (0);
		return (dest = ft_strcpy(dest, (char *)s));
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		dest[c] = s[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
