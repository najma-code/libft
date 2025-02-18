/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:52:50 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:32:57 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (i != 0)
		return (i);
	else
		return (0);
}

/*
int	main(void)
{
	char	*c = " 32j";

	if (ft_strlen(c) == 0)
		printf("ft_strlen:	'%s' is not a string: %zu\n", c, ft_strlen(c));
	else
		printf("ft_strlen:	The size of the string '%s' is: %zu\n", c,
			ft_strlen(c));
	if (strlen(c) == 0)
		printf("strlen:		'%s' is not a string: %ld\n", c, strlen(c));
	else
		printf("strlen:		The size of the string '%s' is: %ld\n", c,
			strlen(c));
	return (0);
}
*/