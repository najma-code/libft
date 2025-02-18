/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:20:52 by emonge            #+#    #+#             */
/*   Updated: 2025/01/26 13:21:01 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src1;
	char	*dest1;

	i = 0;
	src1 = (char *)src;
	dest1 = (char *)dest;
	if (!src1 && !dest1)
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

/*
int	main(void)
{
	char	*src = "Hello, World";
	char	dest[5];

	ft_memcpy(dest, src, 5);
	printf("ft_memcpy:	Copy memory area:	%s\n", dest);
	memcpy(dest, src, 5);
	printf("memcpy:		Copy memory area:	%s\n", dest);
	return (0);
}
*/
