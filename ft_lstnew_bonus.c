/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:43:35 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 17:08:35 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		i;

	i = 52;
	node1 = ft_lstnew("Hello, World");
	node2 = ft_lstnew(&i);
	printf("The content of the new node1 is '%s'\n", (char *)node1->content);
	printf("The content of the new node2 is '%d'\n", *(int *)node2->content);
	free(node1);
	free(node2);
	return (0);
}
*/
