/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:51:38 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:24:05 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//f(index, &(s[index]));
//++index
/*
Function name
ft_striteri
Prototype
void ft_striteri(char *s, void (*f)(unsigned int, char*));
Turn in files
-
Parameters
s:  The string on which to iterate.
f:  The function to apply to each character.
Return value
None
External functs.
None
Description
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument.  Each character is passed by
address to ’f’ to be modified if necessary.

*/
