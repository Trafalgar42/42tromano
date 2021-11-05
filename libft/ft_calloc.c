/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:37:49 by tromano           #+#    #+#             */
/*   Updated: 2021/11/05 18:49:10 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	size_t		i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (ptr = malloc(sizeof(char)));
	ptr = malloc(sizeof(nmemb) * (size));
	if (!ptr)
		return (0);
	while (i <= nmemb)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
