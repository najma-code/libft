/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:44:45 by emonge            #+#    #+#             */
/*   Updated: 2025/01/31 15:53:57 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (ft_strlen(s) <= start)
		return (str);
	while (s[i] != '\0' && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}

/*
int	main(void)
{
	const char		*str = "Hello, World";
	unsigned int	start = 9;
	size_t			len = 5;

	const char *s = ft_substr(str, start, len);
	printf("ft_substr:	The final substring is '%s'\n", s);
	free((void *)s);
	return (0);
}
*/