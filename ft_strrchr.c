/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:49:15 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 19:51:05 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
int	main(void)
{
	char	c = 'o';
	char	*str = "Hello, World";

	const char *s = ft_strrchr(str, c);
	const char *r = strrchr(str, c);
	printf("ft_strrchr:	The last ocurrence of the character '%c' ", c);
	printf("is here '%s' in %p\n", s, (void *)s);
	printf("strrchr:	The last ocurrence of the character '%c' ", c);
	printf("is here '%s' in %p\n", r, (void *)r);
	return (0);
}
*/