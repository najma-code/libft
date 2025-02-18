/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:43:51 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 20:09:46 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*r;
	size_t			i;

	s = (unsigned char *)s1;
	r = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s[i] != r[i])
			return (s[i] - r[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "Hello, ";
	char	s2[] = "World";
	size_t	n = 7;
	int		a;
	int		b;

	a = ft_memcmp(s1, s2, n);
	b = memcmp(s1, s2, n);
	if (a == 0)
	{
		printf("ft_memcmp:	s1 '%s' is equal to s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, a);
	}
	if (a < 0)
	{
		printf("ft_memcmp:	s1 '%s' is less than s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, a);
	}
	if (a > 0)
	{
		printf("ft_memcmp:	s1 '%s' is greater than s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, a);
	}
	if (b == 0)
	{
		printf("memcmp:		s1 '%s' is equal to s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, b);
	}
	if (b < 0)
	{
		printf("memcmp:		s1 '%s' is less than s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, b);
	}
	if (b > 0)
	{
		printf("memcmp:		s1 '%s' is greater than s2 '%s' ", s1, s2);
		printf("in the first %ld byte(s): %d\n", n, b);
	}
	return (0);
}
*/
