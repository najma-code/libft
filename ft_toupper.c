/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:56:12 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:16:42 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
	else
		return (c);
}

/*
int	main(void)
{
	int	c = 'r';

	printf("ft_toupper:	'%c' turns into: '%c'\n", c, ft_toupper(c));
	printf("toupper:	'%c' turns into: '%c'\n", c, toupper(c));
}
*/