/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:02:48 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/17 13:17:21 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pos;

	if (*needle == '\0')
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] != '\0' && pos < len)
	{
		i = 0;
		while (needle[i] == haystack[i + pos] && needle[i] != '\0'
			&& pos + i < len)
			i++;
		if (needle[i] == '\0')
			return ((char *)(haystack + pos));
		pos++;
	}
	return (0);
}
