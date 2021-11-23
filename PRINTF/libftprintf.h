/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:47 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 13:49:12 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base(int n, int base);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_itoa(int n);
int		ft_printf(const char *s, ...);
char	*ft_itoa_base_min(int n, int base);
int		ft_handle_c(va_list va_lst);
int		ft_handle_d(va_list va_lst);
int		ft_handle_i(va_list va_lst);
int		ft_handle_p(va_list va_lst);
int		ft_handle_percent(va_list va_lst);
int		ft_handle_s(va_list va_lst);
int		ft_handle_u(va_list va_lst);
int		ft_handle_x(va_list va_lst);
int		ft_handle_xmaj(va_list va_lst);
void	ft_putchar(const char *s);
void	ft_putstr(char *str);
int		ft_strlen(const char *str);
#endif