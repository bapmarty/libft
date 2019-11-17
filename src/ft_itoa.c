/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:28:13 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/17 18:23:19 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
	else
		*neg = 0;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		ncpy;
	int		size;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_check_neg(&n, &neg);
	ncpy = n;
	size = 2;
	while (ncpy /= 10)
		++size;
	size += neg;
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	str[--size] = 0;
	while (size-- > 0)
	{
		str[size] = n % 10 + 48;
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
