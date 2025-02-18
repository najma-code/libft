/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:23:41 by emonge            #+#    #+#             */
/*   Updated: 2025/01/22 15:36:33 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
}

/*
int	main(void)
{
	int		a;
	//int		b;
	char	src[] = "Hello there, World";
	char	dest[19];
	int		size = 4;

	a = ft_strlcpy(dest, src, size);
	printf("ft_strlcpy:	Copied %d characters from '%s' ", size, src);
	printf("into '%s', length %d\n", dest, a);
	//b = strlcpy(dest, src, size);
	//printf("strlcpy:	Copied %d characters from '%s' ", size, src);
	//printf("into '%s', length %d\n", dest, b);
}
*/