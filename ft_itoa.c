/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:52:17 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 11:52:39 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		aux;
	char = len;

	aux = n;
	len = ft_intlen(int n);
	if (!(p = malloc(sizeof(char *) len)))
		return (NULL);
	if (n < 0)
	{
		*p = '-';
		aux = aux * -1;
	}
	p[len--] = '\0';
	while (aux)
	{
		p[len--] = aux % 10 + '0';
		aux = aux/10;
	}
	return (str);
}

char	ft_intlen(int n)
{
	int		aux;
	char	len;

	aux = n;
	if (n <= 0)
	// es == 0 tambinén contando con que quiera escribir el 0
		len++;
	while (aux)
	{
		aux = aux/10;
		len++;
	}
	return (len);
}

/*
Function name
		ft_itoa
Prototype
char *ft_itoa(int n);
Turn in files
-
Parameters
n:  the integer to convert.
Return value
The string representing the integer.
NULL if the allocation fails.
External functs.
malloc
Description
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/



