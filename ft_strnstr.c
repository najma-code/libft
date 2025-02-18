/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:44:15 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:35:55 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[j] && j < len)
	{
		if (big[j] == little[0])
		{
			while (little[i] && big[j + i] == little[i] && (j + i) < len)
				i++;
			if (little[i] == '\0')
				return ((char *)&big[j]);
		}
		j++;
	}
	return (NULL);
}

/*
int	main (void)
{
	char	big[] = "Hello, World";
	char	little[] = "llo";
	size_t	n = 3;
	char	*s = ft_strnstr(big, little, n);
	char	*r = strnstr(big, little, n);

	if (s != NULL)
	{
		printf("ft_strnstr:	The first instance of the string '%s' ", little);
		printf("is here '%s' in %p\n", s, (char *)s);
	}
	else
		printf("ft_strnstr:	String '%s' not found in '%s'\n", little, big);
	if (r != NULL)
	{
		printf("strnstr:	The first instance of the string '%s' ", little);
		printf("is here '%s' in %p\n", r, (char *)r);
	}
	else
		printf("strnstr:	String '%s' not found in '%s'\n", little, big);
	return (0);
}
*/