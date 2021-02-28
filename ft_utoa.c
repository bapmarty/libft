/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 10:33:39 by bapmarti          #+#    #+#             */
/*   Updated: 2021/02/28 21:54:14 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check_neg(unsigned int *n, int *neg)
{
	if ((int)*n < 0)
		*neg = 1;
	else
		*neg = 0;
}

static int	ft_size(unsigned int n)
{
	int	size;

	size = 2;
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static char	*ft_write(unsigned int n, unsigned int size, char *s)
{
	s[--size] = 0;
	while (size-- > 0)
	{
		s[size] = n % 10 + 48;
		n /= 10;
	}
	return (s);
}

static char	*ft_write_neg(unsigned int n, unsigned int size, char *s)
{
	unsigned int	nb;

	nb = -n + 2147483647;
	s[--size] = 0;
	while (size-- > 0)
	{
		s[size] = nb % 10 + 48;
		nb /= 10;
	}
	return (s);
}

char	*ft_utoa(unsigned int n)
{
	char				*s;
	unsigned int		size;
	int					neg;

	ft_check_neg(&n, &neg);
	if (n > 0)
		size = ft_size(n);
	else
		size = 10;
	s = (char*)malloc(sizeof(char) * size);
	if (!(s))
		return (NULL);
	if (n > 0)
		return (ft_write(n, size, s));
	return (ft_write_neg(n, size, s));
}
