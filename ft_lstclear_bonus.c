/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:30:49 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:30:52 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*position;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
	*lst = NULL;
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;

	node1 = ft_lstnew("Hello, ");
	node2 = ft_lstnew("World");
	list = NULL;
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	while (list != NULL)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("%p\n", list);
	ft_lstclear(&list, free);
	printf("The list now is\n");
	while (list != NULL)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("%p\n", list);
	return (0);
}
*/