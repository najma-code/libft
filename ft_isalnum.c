/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:39:45 by emonge            #+#    #+#             */
/*   Updated: 2025/01/21 16:34:53 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;

	c = '?';
	if (ft_isalnum(c) == 0)
		printf("ft_isalnum:	'%c' is not a character nor a number: %d\n", c,
			ft_isalnum(c));
	else
		printf("ft_isalnum:	'%c' is a character or a number: %d\n", c,
			ft_isalnum(c));
	if (isalnum(c) == 0)
		printf("isalnum:	'%c' is not a character nor a number: %d\n", c,
			isalnum(c));
	else
		printf("isalnum:	'%c' is a character or a number: %d\n", c,
			isalnum(c));
	return (0);
}
*/
