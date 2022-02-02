/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:21:12 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/01 19:27:23 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_node;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list != NULL)
	{
		next_node = new_list;
		lst = lst->next;
		while (lst != NULL)
		{
			next_node->next = ft_lstnew(f(lst->content));
			if (next_node == NULL)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			lst = lst->next;
			next_node = next_node->next;
		}
	}
	return (new_list);
}
