/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:57:56 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/09 20:01:54 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	void	*s2;

	if (!(s2 = malloc(sizeof(char) * n + 1)))
		return (NULL);
	return (ft_memcpy(s2, s1, n));
}
