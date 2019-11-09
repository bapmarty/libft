/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 09:36:02 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/09 20:26:19 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s == d)
		return (dst);
	if (s < d)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (n-- > 0)
			*d++ = *s++;
	return (dst);
}
