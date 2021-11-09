/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:31:12 by tromano           #+#    #+#             */
/*   Updated: 2021/11/09 14:57:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	ft_findstart(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_findend(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	if (!s1)
		return (NULL);
	end = ft_findend(s1, set);
	start = ft_findstart(s1, set);
	if (!set)
		return (ft_strdup(s1));
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n rep1 du bg :", ft_strtrim("   xxxtripouille", " x"));
// 	printf("%s\n rep2 du bg :", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
// 	printf("%s\n rep3 du bg :", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
	
// // 	printf("%d\n rep1 du fdp :", strtrim("Hello \t  Please\n Trim me !", " \n\t"));
// // 	printf("%d\n rep2 du fdp :", strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
// // 	printf("%d\n rep3 du fdp :", strtrim("  \t \t \n   \n\n\n\t", " \n\t"));

	
// }
