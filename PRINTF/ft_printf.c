/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/22 14:51:15 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *s, ...)
{

}

int	ft_handle(const char *s)
{
	if (*s == 'c')
		ft_handle_c(s);
	if (*s == 's')
		ft_handle_s(s);
	if (*s == 'p')
		ft_handle_p(s);
	if (*s == 'd')
		ft_handle_d(s);
	if (*s == 'i')
		ft_handle_i(s);
	if (*s == 'u')
		ft_handle_u(s);
	if (*s == 'x')
		ft_handle_x(s);
	if (*s == 'X')
		ft_handle_X(s);
	if (*s == '%')
		ft_handle_percent(s);
	else
		return (0);
}
