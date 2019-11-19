/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:37:21 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/10 22:45:15 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	if (!(s2 = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(s2, s1, len);
	s2[len] = '\0';
	return (s2);
}
