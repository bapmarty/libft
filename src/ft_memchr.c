/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:26:23 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/06 15:28:38 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c_in, size_t n)
{
	unsigned char	c;
	unsigned char	*p;

	c = c_in;
	p = s;
	while (*p != c && n-- > 0)
		p++;
	return (*p == c ? s : NULL);
}
