/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:21:11 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/05 11:21:14 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c) 
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
