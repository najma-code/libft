/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:41:39 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:25:37 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	i = n;
	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (!src1 && !dest1)
		return (NULL);
	if (dest1 <= src1)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (i > 0)
		{
			i--;
			dest1[i] = src1[i];
		}
	}
	return (dest1);
}

/*
int	main(void)
{
	char	src[] = "Hello, World";
	char	dest[] = "Hello, World";

	ft_memmove(&src[3], &src[2], 5);
	printf("ft_memmove:	Copy memory area:	%s\n", src);
	memmove(&dest[3], &dest[2], 5);
	printf("memmove:	Copy memory area:	%s\n", src);
}
*/
