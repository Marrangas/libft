/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:17:43 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/18 17:57:01 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i=0;
	while (i < n)
	{
		*((char*)(s + i)) = c;
		i++;
	}
	return (s);
}
#include <string.h>
#include <stdio.h>
int main ()
{
	char s[]="una string cuaalquiera";
	char s1[]="una string cuaalquiera";
	
	printf("La string original: \n %s \n", s);
	printf("Mine %s\n\n", ft_memset(s, 'x', 4));
	printf("despuese %c\n\n", s[4]);
	printf("Original %s\n", memset(s1, 'x', 4));
	return (0);
}
