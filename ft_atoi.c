/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:57:43 by emonge            #+#    #+#             */
/*   Updated: 2025/01/29 16:38:51 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		n = (n * 10) + (nptr[i] - '0');
		i++;
	}
	return (n * sign);
}

/*
int	main(void)
{
	const char	nptr[] = "  -1234";

	printf("ft_atoi:	'%d'\n", ft_atoi(nptr));
	printf("atoi:		'%d'\n", atoi(nptr));
	return (0);
}
*/