/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:19:05 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/01 13:45:47 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	
	tmp = NULL;
	if (lst)
	{
		if (*lst)
		{
			tmp = ft_lstlast(*lst);
			tmp->next = new;
		}
		else
			*lst = new;
	}
}

/*
Parameters			lst:  The address of a pointer to the first link of a list.
					new:  The address of a pointer to the node to be added to the list.
Return value		None
External functs.	None
Description
Adds the node ’new’ at the end of the list.
*/