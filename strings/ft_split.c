/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:12:44 by bapmarti          #+#    #+#             */
/*   Updated: 2021/03/24 17:14:34 by baptistem        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] && s[i] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	ft_len_word(const char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (s[i + pos] != c && s[i + pos])
		i++;
	return (i);
}

static void	ft_write_word(const char *s, char *split, int pos, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		split[i] = s[pos];
		pos++;
		i++;
	}
	split[i] = '\0';
}

static void	*ft_free_arr(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	return (NULL);
}

char		**ft_split(const char *s, char c)
{
	char	**split;
	int		nbwords;
	int		pos;
	int		i;

	nbwords = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (nbwords + 1));
	if (!(split))
		return (NULL);
	i = 0;
	pos = 0;
	while (i < nbwords)
	{
		while (s[pos] == c && s[pos])
			pos++;
		split[i] = malloc(sizeof(char) * (ft_len_word(s, c, pos) + 1));
		if (!(split[i]))
			return (ft_free_arr(split));
		ft_write_word(s, split[i], pos, ft_len_word(s, c, pos));
		pos += ft_len_word(s, c, pos) + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}
