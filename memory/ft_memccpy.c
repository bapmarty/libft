/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:14:35 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/09 21:00:30 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*psrc;
	unsigned char		*pdst;

	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	while (n-- > 0)
	{
		*pdst = *psrc;
		if (*psrc == (unsigned char)c)
			return ((void *)pdst + 1);
		pdst++;
		psrc++;
	}
	return (NULL);
}
