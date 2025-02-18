/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:00:42 by emonge            #+#    #+#             */
/*   Updated: 2025/02/03 16:36:38 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd((nbr % 10) + '0', fd);
}

/*
int	main(void)
{
	int	n = INT_MIN;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}
*/