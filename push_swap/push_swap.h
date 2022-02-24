/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:36:48 by tromano           #+#    #+#             */
/*   Updated: 2022/02/24 17:57:32 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_dlist{
	t_node	*first;
	t_node	*last;
	int		size;
}t_list;

typedef struct s_node{
	int		n;
	t_node	*prev;
	t_node	*next;
}	t_node;

#endif