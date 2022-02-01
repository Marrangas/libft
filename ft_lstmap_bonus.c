/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:21:12 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/01 13:43:42 by jmorras-         ###   ########.fr       */
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
/*
Parameters		lst:  The address of a pointer to a node.
				f:  The address of the function used to iterate on the list.
				del:  The address of the function used to delete the content of a node if needed.
Return value	The new list.
				NULL if the allocation fails.
External functs.malloc, free
Description
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.  Creates a new
list resulting of the successive applications of
the function ’f’.  The ’del’ function is used to
delete the content of a node if needed.
*/
