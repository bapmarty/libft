/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:43:28 by bapmarti          #+#    #+#             */
/*   Updated: 2021/03/24 17:14:48 by baptistem        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_char(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	while (ft_find_char(s1[start], set))
		start++;
	if (start >= ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (ft_find_char(s1[end], set))
		end--;
	end++;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!(str))
		return (NULL);
	while (start < end)
	{
		*str = s1[start];
		str++;
		start++;
	}
	*str = '\0';
	return (str);
}
