/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:48:59 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:09:26 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = '9';
	if (ft_isdigit(c) == 0)
		printf("ft_isdigit:	%c is not a number: %d\n", c, ft_isdigit(c));
	else
		printf("ft_isdigit:	%c is a number: %d\n", c, ft_isdigit(c));
	if (isdigit(c) == 0)
		printf("isdigit:	%c is not a number: %d\n", c, isdigit(c));
	else
		printf("isdigit:	%c is a number): %d\n", c, isdigit(c));
	return (0);
}
*/