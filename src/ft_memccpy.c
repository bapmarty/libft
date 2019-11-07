/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:14:35 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/07 10:50:21 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *ptr;

	ptr = ft_memchr(src, c, n);
	if (ptr != NULL)
		return (ft_memcpy(dst, src, ptr - src));
	ft_memcpy(dst, src, n);
	return (NULL);
}
