/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:29:16 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:29:19 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;
	t_list	*last_node;

	node1 = ft_lstnew("Hello, ");
	node2 = ft_lstnew("World");
	list = NULL;
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	last_node = ft_lstlast(list);
	printf("The content of the last node of the list ");
	printf("is %s\n", (char *)last_node->content);
	free(node1);
	free(node2);
	return (0);
}
*/