/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:03:39 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/07 11:19:17 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}
