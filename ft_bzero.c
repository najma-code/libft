/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:45:22 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:13:23 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	dest[50];

	ft_bzero(dest, 5);
	printf("ft_bzero:	Zero a byte string:	%s\n", dest);
	bzero(dest, 5);
	printf("bzero:		Zero a byte string:	%s\n", dest);
}
*/
