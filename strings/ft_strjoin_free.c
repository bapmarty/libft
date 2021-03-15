/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:01:14 by bapmarti          #+#    #+#             */
/*   Updated: 2021/03/15 13:43:44 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, const char *s2)
{
	size_t		j;
	size_t		len;
	char		*tmp;
	char		*str;

	tmp = s1;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	len = 0;
	while (s1[len])
	{
		str[len] = s1[len];
		len++;
	}
	j = 0;
	while (s2[j])
	{
		str[len + j] = s2[j];
		j++;
	}
	str[len + j] = '\0';
	free(tmp);
	return (str);
}
