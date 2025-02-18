/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:31:02 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:31:11 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*
static void	ft_printnode(void *content)
{
	printf("%s -> ", (char *)content);
}

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
	printf("Applied function printf to list\n");
	ft_lstiter(list, ft_printnode);
	free(node1);
	free(node2);
	return (0);
}
*/