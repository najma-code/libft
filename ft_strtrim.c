/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emonge <emonge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:45:34 by emonge            #+#    #+#             */
/*   Updated: 2025/01/30 13:31:56 by emonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	while (ft_strrchr(set, s1[j]) != NULL)
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}

/*
int main(void)
{
	char const	*s1 = "alHello, Worldla";
	char const	*set = "al";
	char		*str;

	str = ft_strtrim(s1, set);
	printf("ft_strtrim:	The final substring is '%s'\n", str);
	free(str);
	return (0);
}
*/