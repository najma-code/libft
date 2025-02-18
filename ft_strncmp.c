/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:53:27 by emonge            #+#    #+#             */
/*   Updated: 2025/01/26 19:25:58 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "Hello ";
	char	s2[] = "World";
	size_t	n = 3;
	int		a;
	int		b;

	a = ft_strncmp(s1, s2, n);
	b = strncmp(s1, s2, n);
	if (a == 0)
	{
		printf("ft_strncmp:	s1 '%s' is equal to s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, a);
	}
	if (a < 0)
	{
		printf("ft_strncmp:	s1 '%s' is less than s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, a);
	}
	if (a > 0)
	{
		printf("ft_strncmp:	s1 '%s' is greater than s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, a);
	}
	if (b == 0)
	{
		printf("strncmp:	s1 '%s' is equal to s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, b);
	}
	if (b < 0)
	{
		printf("strncmp:	s1 '%s' is less than s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, b);
	}
	if (b > 0)
	{
		printf("strncmp:	s1 '%s' is greater than s2 '%s' ", s1, s2);
		printf("in the first %zu byte(s): %d\n", n, b);
	}
	return (0);
}
*/