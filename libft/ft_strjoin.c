/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:43:39 by tromano           #+#    #+#             */
/*   Updated: 2021/11/01 17:30:32 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenlen(char const *s1, char const *s2)
{
	int	i;
	int	lens;

	i = 0;
	lens = 0;
	while (i < ft_strlen(s1))
	{
		lens = lens + ft_strlen(s1);
		i++;
	}
	lens = lens + (ft_strlen(s1) - 1) + ft_strlen(s2) + 1;
	return (lens);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (ft_strlen(s1) == 0)
	{
		str = malloc(sizeof(char));
		return (str);
	}
	str = malloc(sizeof(char) * ft_lenlen(s1, s2));
	if (!(str))
		return (NULL);
	*str = 0;
	i = 0;
	if (i < ft_strlen(s1))
	{
		ft_strcat(str, ((char *)s1));
		if (i < ft_strlen(s1) - 1)
			ft_strcat(str, ((char *)s2));
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("ouloulou", "alalalala"));
// 	return (0);
// }
