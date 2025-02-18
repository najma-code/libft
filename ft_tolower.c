/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:56:03 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:16:20 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	else
		return (c);
}

/*
int	main(void)
{
	int	c = 'A';

	printf("ft_tolower:	'%c' turns into: '%c'\n", c, ft_tolower(c));
	printf("tolower:	'%c' turns into: '%c'\n", c, tolower(c));
}
*/