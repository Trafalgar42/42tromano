/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:33:49 by tromano           #+#    #+#             */
/*   Updated: 2021/11/08 11:32:28 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*src = "tripouille";
// 	char	*d1 = strrchr(src, 't' + 256);
// 	char	*d2 = ft_strrchr(src, 't' + 256);

// 	printf("%s\n rep du bg ", d2);
// 	printf("%s\n rep du fdp d'ordi ", d1);
// }
