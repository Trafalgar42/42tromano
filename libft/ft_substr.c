/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:33:35 by tromano           #+#    #+#             */
/*   Updated: 2021/11/18 16:11:03 by tromano          ###   ########.fr       */
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
