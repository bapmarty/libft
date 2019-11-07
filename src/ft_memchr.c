/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:26:23 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/07 12:55:03 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c_in, size_t n)
{
	unsigned char		c;
	const unsigned char	*p;

	c = c_in;
	p = s;
	while (*p != c && n-- > 0)
		p++;
	return (*p == c ? (void *)s : NULL);
}
