/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:29:18 by emonge            #+#    #+#             */
/*   Updated: 2025/01/28 11:36:50 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
int	main(void)
{
	size_t		a;
	size_t		b;
	char		src[] = "World";
	char		dst[] = "Hello, ";
	size_t		size = 20;

	a = ft_strlcat(dst, src, size);
	printf("ft_strlcat:	Copied %zu characters from '%s' ", size, src);
	printf("into '%s', length %zu\n", dst, a);
	//b = strlcat(dst, src, size);
	//printf("strlcat:	Copied %zu characters from '%s' ", size, src);
	//printf("into '%s', length %zu\n", dst, b);
	return (0);
}
*/