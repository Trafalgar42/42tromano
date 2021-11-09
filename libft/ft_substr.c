/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:33:35 by tromano           #+#    #+#             */
/*   Updated: 2021/11/09 16:18:38 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	index;
// 	size_t	j;
// 	char	*str;

// 	if (len > (size_t)ft_strlen(s))
// 		index = ((size_t)ft_strlen(s));
// 	else
// 		index = len;
// 	j = 0;
// 	str = malloc(sizeof(char) * (index + 1));
// 	if (!str)
// 		return (NULL);
// 	while (start < (unsigned int)ft_strlen(s) && j < index)
// 	{
// 		str[j] = s[start];
// 		start++;
// 		j++;
// 	}
// 	str[j] = '\0';
// 	return (str);
// }

// int main (void)
// {
// 	printf("%s\n rep du bg :", ft_substr("hololjololog", 4, 10));
// 	// printf("%d\n rep du fdp :", ft_substr());
// 	// printf("%d\n rep du fdp :", substr());
// }