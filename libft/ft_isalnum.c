/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:50:26 by tromano           #+#    #+#             */
/*   Updated: 2021/10/30 16:32:41 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		if (c > 'Z' && c < 'a')
			return (0);
		return (1);
	}
	else
		return (0);
}
