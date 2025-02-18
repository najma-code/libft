/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:01:10 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:40:24 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

/*
int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*a;
	char	*b;

	nmemb = 4;
	size = 3;
	a = ft_calloc(nmemb, size);
	b = calloc(nmemb, size);
	printf("%s %p", a, a);
	printf("%s %p", b, b);
	free(a);
	free(b);
	return (0);
}
*/
