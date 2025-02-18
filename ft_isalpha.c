/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:47:33 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 15:51:56 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = 'a';
	if (ft_isalpha(c) == 0)
		printf("ft_isalpha:	%c is not a character: %d\n", c, ft_isalpha(c));
	else
		printf("ft_isalpha:	%c is a character: %d\n", c, ft_isalpha(c));
	if (isalpha(c) == 0)
		printf("isalpha:	%c is not a character: %d\n", c, isalpha(c));
	else
		printf("isalpha:	%c is a character: %d\n", c, isalpha(c));
	return (0);
}
*/
