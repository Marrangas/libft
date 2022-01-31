/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:20:36 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/31 17:20:41 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	
}
/*
Parameters		lst:  The address of a pointer to a node.
				f:  The address of the function used to iterate on the list.
Return value	None
External functs.None
Description
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
*/