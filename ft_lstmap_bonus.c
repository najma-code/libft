/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:31:22 by emonge            #+#    #+#             */
/*   Updated: 2025/02/10 21:31:25 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*map_list;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	map_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		if (content != NULL)
		{
			node = ft_lstnew(content);
			if (node != NULL)
			{
				ft_lstadd_back(&map_list, node);
				lst = lst->next;
				continue ;
			}
			del(content);
		}
		ft_lstclear(&map_list, del);
		return (NULL);
	}
	return (map_list);
}

/*
static void	*ft_strtolower(void *content)
{
	char	*str;
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)content;
	str = (char *)malloc(sizeof(char) * (ft_strlen(ptr) + 1));
	if(!str)
		return (NULL);
	while (*ptr != '\0')
	{
		str[i] = ft_tolower(ptr[0]);
		i++;
		ptr++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;
	t_list	*new_list;

	node1 = ft_lstnew(ft_strdup("HELLO, "));
	node2 = ft_lstnew(ft_strdup("WORLD"));
	list = NULL;
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	new_list = ft_lstmap(list, ft_strtolower, free);
	printf("The list now is \n");
	while (new_list != NULL)
	{
		printf("%s -> ", (char *)new_list->content);
		new_list = new_list->next;
	}
	printf("%p", new_list);
	ft_lstclear(&list, free);
	ft_lstclear(&new_list, free);
	return (0);
}
*/
