/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:50:22 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 11:51:42 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		index;

	if (!s || !f)
		return (NULL);
	if (!(p = malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
ft_strmapi
Prototype
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Turn in files
-
Parameters
s:  The string on which to iterate.
f:  The function to apply to each character.
Return value
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External functs.
malloc
Description
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

*/