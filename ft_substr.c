/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 12:19:43 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/19 15:10:03 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (!(newstr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start < ft_strlen(s))
		while (i < len && s[i] != '\0')
		{
			newstr[i] = s[start + i];
			i++;
		}
	newstr[i] = '\0';
	return (newstr);
}
