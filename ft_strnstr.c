/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:14 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/24 17:23:21 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;

	printf("holi primero\n");
	if (n > 0)
	{
		printf("n > 0\n");
		while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
		{
			printf("comp   ");
			if (s1[i] != s2[i])
				printf("DIFERNTES!!!");
				return (s1[i] - s2[i]);
			i++;
		}
		printf("\n recorrido entero \n!");
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
	}
	printf("\n resultado de la comparación: ");
	return (0);
}

char	*ft_strnstr(const char *haystack,const  char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= ft_strlen(needle))
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char sO1[] = "mememememem met met abc para parámetro para";
	char sO2[] =  "metro";
	int n = 5000;

	printf("Original\t Dest: %s \t Source: %s \t Result: %s \n", sO1, sO2, strnstr(sO1, sO2, n));
	printf("La mia \t\t Dest: %s \t Source: %s \t Result: %s \n", sO1, sO2, ft_strnstr(sO1, sO2, n));
}
