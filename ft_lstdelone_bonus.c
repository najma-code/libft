/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:30:04 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:30:06 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;
	t_list	*head;

	node1 = ft_lstnew(ft_strdup("Hello, "));
	node2 = ft_lstnew(ft_strdup("World"));
	list = NULL;
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	head = list;
	while (list != NULL)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("%p\n", list);
	list = head;
	ft_lstdelone(list->next, free);
	printf("The list now is \n");
	while (list != NULL)
	{
		printf("%s -> \n", (char *)list->content);
		list = list->next;
	}
	printf("%p\n", list);
	ft_lstclear(&head, free);
	return (0);
}
*/