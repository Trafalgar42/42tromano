/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:03 by tromano           #+#    #+#             */
/*   Updated: 2021/12/01 15:15:25 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_line
{
	int		max;
	int		pos;
	int		fd;
	char	str[BUFFER_SIZE];
}	t_read;

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
char	*ft_joint(char *str, char c);
int		ft_init(t_read *tab, int fd);
char	ft_check(t_read *tab);

#endif