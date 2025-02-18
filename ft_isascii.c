/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:51:00 by emonge            #+#    #+#             */
/*   Updated: 2025/01/22 09:28:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = 'a';
	if (ft_isascii(c) == 0)
		printf("ft_isascii:	'%c' is not an ASCII character: %d\n", c,
			ft_isascii(c));
	else
		printf("ft_isascii:	'%c' is an ASCII character: %d\n", c,
			ft_isascii(c));
	if (isascii(c) == 0)
		printf("isascii:	'%c' is not an ASCII character: %d\n", c,
			isascii(c));
	else
		printf("isascii:	'%c' is an ASCII character: %d\n", c,
			isascii(c));
	return (0);
}
*/
