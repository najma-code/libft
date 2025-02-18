/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:28:54 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:29:02 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;
	int		size;

	node1 = ft_lstnew("Hello, ");
	node2 = ft_lstnew("World");
	list = NULL;
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	size = ft_lstsize(list);
	printf("The size of the list is %d (nodes)\n", size);
	free(node1);
	free(node2);
	return (0);
}
*/