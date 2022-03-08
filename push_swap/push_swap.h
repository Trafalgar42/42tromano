/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:36:48 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 13:47:22 by tromano          ###   ########.fr       */
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

typedef struct s_node{
	void			*content;
	struct s_node	*prev;
	struct s_node	*next;
}t_node;

typedef struct s_dlist{
	struct s_node	*first;
	struct s_node	*last;
	size_t			size;
}t_dlist;

typedef struct s_stacks{
	struct s_dlist	*a;
	struct s_dlist	*b;

}t_stacks;

void	dlstclear(t_dlist **dl);
t_node	*dsltpushlast(t_dlist *dl);
t_node	*dsltpushfirst(t_dlist *dl);
t_dlist	*dlstnew(void);
void	*dlstgetcontent(t_dlist *dl, size_t i);
t_dlist	*dlstcpy(t_dlist *dl, void *(*f)(void *));
t_dlist	*dlstaddfront(t_dlist *dl, void *content);
t_dlist	*dlstaddback(t_dlist *dl, void *content);

void	threenum(t_dlist *dl);

#endif