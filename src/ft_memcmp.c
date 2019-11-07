/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:29:49 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/07 12:41:36 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ps1;
	const unsigned char *ps2;

	ps1 = s1;
	ps2 = s2;
	while (*ps1 == *ps2 && *ps1 != '\0' && n-- > 0)
	{
		ps1++;
		ps2++;
	}
	return (*ps1 - *ps2);
}
