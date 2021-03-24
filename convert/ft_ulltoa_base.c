/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:54:51 by bapmarti          #+#    #+#             */
/*   Updated: 2021/03/24 17:13:22 by baptistem        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_length(unsigned long long n, int b)
{
	int	i;

	i = 0;
	while (n >= 1)
	{
		n /= b;
		i++;
	}
	return (i);
}

char		*ft_ulltoa_base(unsigned long long n, int b)
{
	int		digits;
	char	*res;
	char	*base;

	base = "0123456789ABCDEF";
	digits = number_length(n, b) + 1;
	res = ft_calloc(digits, digits);
	if (!(res))
		return (NULL);
	res[digits] = '\0';
	digits--;
	if (n == 0)
	{
		res[digits] = '0';
		return (res);
	}
	while (digits--)
	{
		res[digits] = base[n % b];
		n /= b;
	}
	return (res);
}
