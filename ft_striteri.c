/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:58:35 by emonge            #+#    #+#             */
/*   Updated: 2025/02/04 11:31:55 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
static void	ft_tolower_iteri(unsigned int i, char *c)
{
	(void)i;
	*c = ft_tolower(*c);
}

int	main(void)
{
	char	s[] = "Hello, World";

	printf("ft_striteri: '%s' turns into ", s);
	ft_striteri(s, ft_tolower_iteri);
	printf("'%s'\n", s);
	return (0);
}
*/