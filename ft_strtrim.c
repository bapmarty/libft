/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:43:28 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/19 15:18:17 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_find_char(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (ft_find_char(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_find_char(s1[end], set))
		end--;
	end++;
	if (end <= start)
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
