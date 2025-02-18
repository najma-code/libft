/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:45:59 by emonge            #+#    #+#             */
/*   Updated: 2025/02/08 11:10:24 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count_word;
	int		is_c;

	i = 0;
	count_word = 0;
	is_c = 1;
	while (s[i])
	{
		if (s[i] != c && is_c == 1)
		{
			count_word++;
			is_c = 0;
		}
		else if (s[i] == c)
			is_c = 1;
		i++;
	}
	return (count_word);
}

static void	*ft_free(char **str)
{
	size_t	j;

	j = 0;
	while (str[j])
	{
		free(str[j]);
		str[j] = NULL;
		j++;
	}
	free(str);
	return (NULL);
}

char	**ft_create_substr(char *ptr, char c, size_t count_word, char **str)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (j < count_word)
	{
		if (*ptr != c)
		{
			i = 0;
			while (ptr[i] && ptr[i] != c)
				i++;
			str[j] = ft_substr(ptr, 0, i);
			if (!str[j])
				return (ft_free(str));
			ptr += i;
			j++;
		}
		else
			ptr++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*ptr;
	size_t	count_word;

	ptr = (char *)s;
	count_word = ft_count_word(s, c);
	str = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!str)
		return (NULL);
	str = ft_create_substr(ptr, c, count_word, str);
	return (str);
}

/*
int	main(void)
{
	char	s[] = "Hello, World";
	char	c = ' ';
	int		words;
	char	**str;
	size_t	i;
	
	str = NULL;
	i = 0;
	words = ft_count_word(s, c);
	str = ft_split(s, c);
	printf("ft_count_word:	'%s' has '%d' words\n", s, words);
	while (str[i])
	{
		printf("ft_split:	'%s' turns into '%s'\n", s, str[i]);
		i++;
	}
	ft_free(str);
	return (0);
}
*/