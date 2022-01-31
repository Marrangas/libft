/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:17:16 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/31 18:31:06 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}	
/*
Parameters 		lst:  The address of a pointer to the first link of a list.
				new:  The address of a pointer to the node to be added to the list.
Return value	None
External functs.None
Description		Adds the node ’new’ at the beginning of the list.
*/
