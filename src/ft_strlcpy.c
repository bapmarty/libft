/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:24:16 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/07 10:05:42 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	srcsize = 0;
	i = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	if (srcsize != 0)
	{
		while (dstsize > 0 && src[i] != '\0')
		{
			*dst++ = src[i++];
			dstsize--;
		}
		while (dstsize > 0)
		{
			*dst++ = '\0';
			dstsize--;
		}
	}
	return (srcsize);
}
