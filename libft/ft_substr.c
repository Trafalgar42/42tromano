/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:33:35 by tromano           #+#    #+#             */
/*   Updated: 2021/11/08 14:08:21 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	j;
	char	*str;

	count = 0;
	j = 0;
	count = (len + 1) - (size_t)start;
	str = malloc(((sizeof(char) * count) + 1));
	if (!str)
		return (NULL);
	while (start < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

// int main (void)
// {
// 	printf("%s\n rep du bg :", ft_substr("hololjololog", 4, 10));
// 	// printf("%d\n rep du fdp :", ft_substr());
// 	// printf("%d\n rep du fdp :", substr());
// }