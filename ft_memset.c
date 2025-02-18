/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:59:35 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:12:52 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return ((void *)str);
}

/*
int	main(void)
{
	char	dest[50];
	char	c = 'a';

	ft_memset(dest, c, 5);
	printf("ft_memset:	Fill memory with a constant byte: 	%s\n", dest);
	memset(dest, c, 5);
	printf("memset:		Fill memory with a constant byte:	%s\n", dest);
	return (0);
}
*/