/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:59:03 by tromano           #+#    #+#             */
/*   Updated: 2021/12/01 14:27:41 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE

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




# endif
#endif