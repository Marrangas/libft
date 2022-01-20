/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:58:43 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 19:04:37 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned int num = 3;
    char str1[] = "ab";
    char str2[] = "accdefgh";

    printf("S1 \t\t\t\t %s  \n ", str1);
    printf("S2 \t\t\t\t %s  \n ", str2);

    printf("la string y su valor %s\n", str1);
    printf("LA ORIGINAL\t\t\t %i \n ", strncmp(str1, str2, num));
    printf("MI FUNCIÓN \t\t\t %i \n ", ft_strncmp(str1, str2, num));
    return (0);
}
*/
