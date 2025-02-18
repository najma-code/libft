/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:43:37 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:40:03 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
int	main (void)
{
	int		c = 'o';
	char	str[] = "Hello, World";
	size_t	n = 6;

	const char *s = ft_memchr(str, c, n);
	const char *r = memchr(str, c, n);
	if (s != NULL)
	{
		printf("ft_memchr:	The first instance of the character '%c' ", c);
		printf("is here '%s' in %p\n", s, (void *)s);
	}
	else
		printf("ft_memchr:	Character '%c' not found\n", c);
	if (r != NULL)
	{
		printf("memchr:		The first instance of the character '%c' ", c);
		printf("is here '%s' in %p\n", r, (void *)r);
	}
	else
		printf("memchr:		Character '%c' not found\n", c);
	return (0);
}
*/