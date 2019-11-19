/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 22:36:56 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/10 22:37:13 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	void	*s2;

	if (!(s2 = malloc(sizeof(char) * n + 1)))
		return (NULL);
	return (ft_memcpy(s2, s1, n));
}
