/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:36:48 by tromano           #+#    #+#             */
/*   Updated: 2022/02/25 14:48:30 by tromano          ###   ########.fr       */
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
	size_t	size;
}t_dlist;

typedef struct s_node{
	void	*content;
	t_node	*prev;
	t_node	*next;
}	t_node;

#endif