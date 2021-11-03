/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:33:49 by tromano           #+#    #+#             */
/*   Updated: 2021/11/03 15:13:08 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i--;
	}
	if (s[i] == c)
		return (&((char *)s)[i]);
	return (0);
}


// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (c == s[i])
// 		{
// 			if (c != s[i + 1])
// 				return (&((char *)s)[i]);
// 			i++;
// 		}
// 		i++;
// 	}
// 	if (s[i] == c)
// 		return (&((char *)s)[i]);
// 	return (&((char *)s)[i]);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (c != s[i + 1])
// 			str = &((char *)s)[i];
// 		i++;
// 	}
// 	if (s[i] == c)
// 		str = &((char *)s)[i];
// 	return (str);
// }

// int	main(void)
// {
// 	char	*src = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char	*d1 = strrchr(src, ' ');
// 	char	*d2 = ft_strrchr(src, ' ');

// 	printf("%s\n rep du bg", d2);
// 	printf("%s\n rep du fdp d'ordi", d1);
// }