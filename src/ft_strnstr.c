/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:02:48 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/09 15:30:07 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len-- > 0)
	{
		i = 0;
		while (needle[i] == *(haystack + i) && needle[i] != '\0')
			i++;
		if (*needle == '\0')
			return ((char *)(haystack + i));
		haystack++;
	}
	return (0);
}
