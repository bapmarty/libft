/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:35:58 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/06 15:29:12 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *pdst;
	char *psrc;

	pdst = dst;
	psrc = src;
	while (n-- > 0)
		*pdst++ = *psrc++;
	return (dst);
}
