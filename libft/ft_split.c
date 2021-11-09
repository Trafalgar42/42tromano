/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:31:33 by tromano           #+#    #+#             */
/*   Updated: 2021/11/09 16:20:20 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_countwords(char const *s, char c)
// {
// 	int	i;
// 	int	in;

// 	i = 0;
// 	in = 0;
// 	while (*s)
// 	{
// 		if (*s != c && in == 0)
// 		{
// 			in = 1;
// 			i++;
// 		}
// 		else if (*s == c)
// 			in = 0;
// 		s++;
// 	}
// 	return (i);
// }

int	ft_countwords(char const *s, char c)
{
	int		i;
	char	pre_c;

	i = 0;
	pre_c = c;
	while (*s)
	{
		if (pre_c == c && *s != c)
			i++;
		pre_c = *s;
		s++;
	}
	return (i);
}

// char	*ft_cpywords(const char *s, size_t start, size_t end)
// {
// 	char	*str;
// 	int		i;

// 	i = 0;
// 	str = malloc(sizeof(char) * (end - start + 1));
// 	if (!str)
// 		return (0);
// 	while (start < end)
// 	{
// 		str[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

int	ft_nextcharset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		nextchar;
	int		i;
	char	**str_tab;

	if (!s)
		return (NULL);
	str_tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str_tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		nextchar = ft_nextcharset(s, c);
		if (nextchar)
		{
			str_tab[i] = ft_substr(s, 0, nextchar);
			i++;
			s += nextchar;
		}
		else
			s++;
	}
	str_tab[i] = 0;
	return (str_tab);
}

// char	**ft_split(char const *s, char c)
// {
// 	int		j;
// 	int		i;
// 	int		in;
// 	char	**str;

// 	str = malloc(sizeof(char) * ft_countwords(s, c));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	in = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (c != s[i] && in < 0)
// 			in = i;
// 		else if ((c == s[i] || i == ft_strlen(s)) && in > 0)
// 		{
// 			str[j] = ft_cpywords(s, in, c);
// 			j++;
// 			in = -1;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }
// char	**ft_split(char const *s, char c)
// {
// 	size_t		i;
// 	size_t		j;
// 	size_t		a;
// 	char		**s1;

// 	s1 = malloc(sizeof(char) * ft_strlen(s) + 1);
// 	if (!s1)
// 		return (s1 = malloc(sizeof(void *)));
// 	a = 0;
// 	i = 0;
// 	j = 0;
// 	while (*s)
// 	{
// 		j = 0;
// 		while (s[i] == c)
// 			i++;
// 		while (s[i] != c)
// 		{
// 			*s1[j] = s[i];
// 			i++;
// 			j++;
// 		}
// 		while (s[i] == c)
// 			i++;
// 		a++;
// 	}
// 	return (s1);
// }

// int main (void)
// {
// 	char *string = "      split       this for   me  !       ";
// 	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
// 	char **result = ft_split(string, ' ');
// 	printf("%c\n rep du bg :", **ft_split("      split       this for   me  !       ", ' '));
// 	printf("%d\n rep du fdp :", split("      split       this for   me  !       ", ' '));
// }
