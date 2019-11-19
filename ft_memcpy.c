/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:35:58 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/09 20:09:54 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = dst;
	psrc = src;
	if (n == 0 || pdst == psrc)
		return (dst);
	while (n-- > 0)
		*pdst++ = *psrc++;
	return (dst);
}
