/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:44:55 by emonge            #+#    #+#             */
/*   Updated: 2025/01/31 17:07:29 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy((char *)str, (const char *)s1, total_len + 1);
	ft_strlcat((char *)str, (const char *)s2, total_len + 1);
	return (str);
}

/*
int	main(void)
{
	char		s1[] = "Hello, ";
	char		s2[] = "World";
	char		*s;

	s = ft_strjoin(s1, s2);
	printf("ft_strjoin:	Joined s1 '%s' and s2 '%s': ", s1, s2);
	printf("'%s'\n", s);
	free(s);
	return (0);
}
*/