/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:37:49 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 19:05:59 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		len;

	len = (count * size);
	ptr = malloc(len);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, len);
	return (ptr);
}
