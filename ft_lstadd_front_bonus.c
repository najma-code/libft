/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:43:56 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 16:55:04 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	printf("The content of the first node of the list ");
	printf("is %s\n", (char *)node1->content);
	free(node1);
	free(node2);
	return (0);
}
*/