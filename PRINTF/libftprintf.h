/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:47 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 15:33:26 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base(int n, int base);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_itoa(int n);
int		ft_printf(const char *s, ...);






#endif