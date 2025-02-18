/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:51:58 by emonge            #+#    #+#             */
/*   Updated: 2025/01/22 09:29:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = '5';
	if (ft_isprint(c) == 0)
		printf("ft_isprint:	'%c' is not an ASCII printable character: %d\n",
			c, ft_isprint(c));
	else
		printf("ft_isprint:	'%c' is an ASCII printable character: %d\n",
			c, ft_isprint(c));
	if (isprint(c) == 0)
		printf("isprint:	'%c' is not an ASCII printable character: %d\n",
			c, isprint(c));
	else
		printf("isprint:	'%c' is an ASCII printable character: %d\n",
			c, isprint(c));
	return (0);
}
*/