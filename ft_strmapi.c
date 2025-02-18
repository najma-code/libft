/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:58:20 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 22:58:23 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char ft_tolower_mapi(unsigned int i, char c)
{
	i = 0;
	c = ft_tolower(c + i);
	return (c);
}

int	main(void)
{
	char	s[] = "Hello, World";
	char	*str;

	printf("ft_strmapi: '%s' turns into ", s);
	str = ft_strmapi(s, ft_tolower_mapi);
	printf("'%s'\n", str);
	free(str);
	return (0);
}
*/