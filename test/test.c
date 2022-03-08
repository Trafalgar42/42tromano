/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:10:16 by tromano           #+#    #+#             */
/*   Updated: 2022/03/08 17:24:14 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*dlstnew(void)
{
	t_dlist	*new_content;

	new_content = malloc(sizeof(t_dlist));
	if (!new_content)
		return (NULL);
	(*new_content).size = 0;
	(*new_content).last = NULL;
	(*new_content).first = NULL;
	return (new_content);
}

t_dlist	*dlstaddback(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = dlstnew();
	node = malloc(sizeof(t_node));
	if (!node)
		return (dl);
	node->next = NULL;
	node->prev = dl->last;
	node->content = content;
	if (dl->last)
	{
		dl->last->next = node;
		dl->last = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	if (node)
		dl->size++;
	return (dl);
}

t_dlist	*dlstaddfront(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = dlstnew();
	node = malloc(sizeof(t_node));
	if (!node)
		return (dl);
	node->next = dl->first ;
	node->prev = NULL;
	node->content = content;
	if (dl->first)
	{
		dl->first->prev = node;
		dl->first = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	if (node)
		dl->size++;
	return (dl);
}

t_node	*dsltpushfirst(t_dlist *dl)
{
	t_node	*node;

	if (!dl || !dl->first)
		return (NULL);
	node = dl->first;
	if (dl->first == dl->last && node)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->first = dl->first->next;
		dl->first->prev = NULL;
		node->next = NULL;
	}
	while (dl->size)
		dl->size--;
	return (node);
}

t_node	*dsltpushlast(t_dlist *dl)
{
	t_node	*node;

	if (!dl || !dl->last)
		return (NULL);
	node = dl->last;
	if (dl->first == dl->last && node)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->last = dl->last->prev;
		dl->last->next = NULL;
		node->next = NULL;
	}
	while (dl->size)
		dl->size--;
	return (node);
}

void	swap(t_dlist *dl)
{
	t_node	*tmp;

	tmp = malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->content = dl->first->content;
	dl->first->content = dl->first->next->content;
	dl->first->content = tmp->content;
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

void	do_op(t_stacks *stacks, char *op)
{
	if (!ft_strcmp(op, "SA") || !ft_strcmp(op, "SS"))
		swap(stacks->a);
	if (!ft_strcmp(op, "SB") || !ft_strcmp(op, "SS"))
		swap(stacks->b);
	if (!ft_strcmp(op, "PA"))
		dlstaddfront(stacks->a, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, "PB"))
		dlstaddfront(stacks->b, dsltpushfirst(stacks->b));
	if (!ft_strcmp(op, "RA") || !ft_strcmp(op, "RR"))
		dlstaddfront(stacks->a, dsltpushlast(stacks->a));
	if (!ft_strcmp(op, "RB") || !ft_strcmp(op, "RR"))
		dlstaddfront(stacks->b, dsltpushlast(stacks->b));
	if (!ft_strcmp(op, "RRA") || !ft_strcmp(op, "RRR"))
		dlstaddback(stacks->a, dsltpushfirst(stacks->a));
	if (!ft_strcmp(op, "RRB") || !ft_strcmp(op, "RRR"))
		dlstaddback(stacks->b, dsltpushfirst(stacks->b));
}

void	threenum(t_dlist *dl, t_stacks *stacks)
{
	if (dl->first->content > dl->first->next->content
		&& dl->last->content > dl->first->content
		&& dl->last->content > dl->first->next->content)
		do_op(stacks, "SA");
	if (dl->first->content > dl->first->next->content
		&& dl->first->content > dl->last->content
		&& dl->first->next->content < dl->last->content)
		do_op(stacks, "RA");
	if (dl->last->content < dl->first->content
		&& dl->last->content < dl->first->next->content
		&& dl->first->next->content > dl->first->content)
		do_op(stacks, "RRA");
	if (dl->last->content < dl->first->next->content
		&& dl->first->next->content < dl->first->content)
	{
		do_op(stacks, "SA");
		do_op(stacks, "RRA");
	}
	if (dl->first->content < dl->first->next->content
		&& dl->last->content > dl->first->content
		&& dl->last->content < dl->first->next->content)
	{
		do_op(stacks, "SA");
		do_op(stacks, "RA");
	}
}

int main(void)
{
	
}