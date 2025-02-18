/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:07 by emonge            #+#    #+#             */
/*   Updated: 2025/02/03 16:13:14 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	long	nbr;

	i = ft_intlen(n);
	nbr = n;
	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		str[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	str[i--] = (nbr % 10) + '0';
	return (str);
}

/*
int	main(void)
{
	int		n = -258;
	char	*str = ft_itoa(n);

	printf("ft_intlen =	The length of the number %d ", n);
	printf("is %ld\n", ft_intlen(n));
	printf("ft_itoa =	The int %d is now str '%s'\n", n, str);
	free(str);
	return (0);
}
*/