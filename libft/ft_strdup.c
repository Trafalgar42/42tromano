/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:38:34 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 18:52:30 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *s);

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
