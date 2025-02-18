/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:29:44 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:29:48 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
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
	last_node = ft_lstnew("!!");
	list = NULL;
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	ft_lstadd_back(&list, last_node);
	printf("The content of the last node of the list ");
	printf("is %s\n", (char *)last_node->content);
	free(node1);
	free(node2);
	free(last_node);
	return (0);
}
*/

/*
int	main(void)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;

	list_a = NULL;
	list_b = NULL;
	first = ft_lstnew("First");
	second = ft_lstnew("Second");
	third = ft_lstnew("Third");
	fourth = ft_lstnew("Fourth");
	ft_lstadd_back(&list_a, first);
	ft_lstadd_back(&list_a, second);
	ft_lstadd_back(&list_b, third);
	ft_lstadd_back(&list_b, fourth);
	ft_lstadd_back(&list_a, list_b);
	printf("%s -> %s -> %s -> %s -> %s\n",
		(char *)list_a->content,
		(char *)list_a->next->content,
		(char *)list_a->next->next->content,
		(char *)list_a->next->next->next->content,
		(char *)list_a->next->next->next->next);
	printf("The content of the last node of the list ");
	printf("is %s\n", (char *)fourth->content);
	free(first);
	free(second);
	free(third);
	free(fourth);
	return (0);
}
*/