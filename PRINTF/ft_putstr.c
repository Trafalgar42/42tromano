/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:03:19 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 20:26:32 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_count(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
// int main (void)
// {
// 	char str[] = "Hello World";
// 	char i;
// 	i = 0;
// 	ft_putstr(str);

// }