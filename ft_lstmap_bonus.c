/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:33:15 by bapmarti          #+#    #+#             */
/*   Updated: 2019/11/22 11:32:53 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*node;
	t_list	*tmp;

	tmp = lst;
	if (!(nlst = ft_lstnew(f(tmp->content))))
		return (NULL);
	tmp = tmp->next;
	while (tmp)
	{
		if (!(node = ft_lstnew(f(tmp->content))))
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, node);
		tmp = tmp->next;
	}
	free(tmp);
	return (nlst);
}
