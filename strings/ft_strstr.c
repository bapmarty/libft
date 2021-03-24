/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:02:48 by bapmarti          #+#    #+#             */
/*   Updated: 2021/03/16 14:29:25 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	pos;

	if (*needle == '\0')
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] != '\0')
	{
		i = 0;
		while (needle[i] == haystack[i + pos] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return ((char *)(haystack + pos));
		pos++;
	}
	return (0);
}
