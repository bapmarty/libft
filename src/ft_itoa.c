/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:28:13 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/17 18:30:29 by bapmarti         ###   ########.fr       */
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

int		ft_size(int n)
{
	int	size;

	size = 2;
	while (n /= 10)
		size++;
	return (size);
}

char	*ft_write(int n, int size, int neg, char *s)
{
	s[--size] = 0;
	while (size-- > 0)
	{
		s[size] = n % 10 + 48;
		n /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_check_neg(&n, &neg);
	size = ft_size(n) + neg;
	if (!(s = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	return (ft_write(n, size, neg, s));
}
