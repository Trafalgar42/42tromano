/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:31:33 by tromano           #+#    #+#             */
/*   Updated: 2021/11/08 13:10:41 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		a;
	char		**s1;

	s1 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (s1 = malloc(sizeof(void *)));
	a = 0;
	i = 0;
	j = 0;
	while (*s)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			*s1[j] = s[i];
			i++;
			j++;
		}
		while (s[i] == c)
			i++;
		a++;
	}
	return (s1);
}
int main (void)
{
	// char *string = "      split       this for   me  !       ";
	// char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	// char **result = ft_split(string, ' ');
	printf("%c\n rep du bg :", **ft_split("      split       this for   me  !       ", ' '));
	//printf("%d\n rep du fdp :", split("      split       this for   me  !       ", ' '));
}
