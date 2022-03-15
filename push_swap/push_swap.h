/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:36:48 by tromano           #+#    #+#             */
/*   Updated: 2022/03/15 16:51:22 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

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

void		swap(t_dlist *dl);
void		dlstclear(t_dlist **dl);
t_node		*dsltpushlast(t_dlist *dl);
t_node		*dsltpushfirst(t_dlist *dl);
t_dlist		*dlstnew(void);
void		*dlstgetcontent(t_dlist *dl, size_t i);
t_dlist		*dlstcpy(t_dlist *dl, void *(*f)(void *));
t_dlist		*dlstaddfront(t_dlist *dl, void *content);
t_dlist		*dlstaddback(t_dlist *dl, void *content);
t_dlist		*dstrtodlst(char **argstr, int argc);
t_dlist		*strtodlst(char *str);
void		threenum(t_stacks *stacks);
void		fivenum(t_stacks *stack);
void		do_op(t_stacks *stacks, char *op);
int			checkarg(char **arr, int i);
int			checkdouble(t_dlist *dlst);
int			checkorder(t_dlist *dl);
void		freetab(char **tab);
t_dlist		*putfirst(t_dlist *dl, t_node *node);
t_dlist		*putlast(t_dlist *dl, t_node *node);
int			onesmallest(t_stacks *stacks);
int			twosmallest(t_stacks *stacks);
int			threesmallest(t_stacks *stacks);
int			foursmallest(t_stacks *stacks);
int			fivesmallest(t_stacks *stacks);
void		pushsmallest(t_stacks *stacks);
void		printstack(t_stacks *stacks);
void		threesolve(t_stacks *stacks, t_node *f, t_node *m, t_node *l);

#endif