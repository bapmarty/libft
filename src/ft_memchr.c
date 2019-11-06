/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:26:23 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/06 13:40:40 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void *src, int c_in, size_t n)
{
	unsigned char c;
	unsigned char *psrc;

	c = c_in;
	while (*psrc != c && n-- > 0)
		src++;
	return (*psrc == c ? psrc : NULL);
		
}
