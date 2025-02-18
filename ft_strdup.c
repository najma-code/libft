/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:54:27 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:27:36 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s);
	str = (char *)malloc((sizeof(char)) * (size + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, size + 1);
	return (str);
}

/*
int	main(void)
{
	char	src[] = "Hello, World";
	char	*str;
	char	*ptr;

	str = ft_strdup(src);
	printf("ft_strdup:	%s\n", str);
	ptr = strdup(src);
	printf("strdup:		%s\n", ptr);
	free(str);
	free(ptr);
	return (0);
}
*/