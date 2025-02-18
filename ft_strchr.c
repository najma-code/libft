/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:48:07 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:26:27 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
int	main(void)
{
	int		c = 1024;
	char	*str = "Hello, World";

	const char *s = ft_strchr(str, c);
	const char *r = strchr(str, c);
	printf("ft_strchr:	The first ocurrence of the character '%c' ", c);
	printf("is here '%s' in %p\n", s, (void *)s);
	printf("strchr:		The first ocurrence of the character '%c' ", c);
	printf("is here '%s' in %p\n", r, (void *)r);
	return (0);
}
*/
