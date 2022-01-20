/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:11:51 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 15:45:08 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
		if (dstsize != 0)
		{
			while (src[i] != '\0' && i < (dstsize))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (j);
}
/*
#include <stdio.h>
#include <string.h>
int        main(void)
{
    char str[] = "HOLI";
    char dst[] = "123456789";
    char str1[] = "HOLI";
    char dst1[] = "123456789";
    size_t change;
    size_t n = 6;
    size_t length;

    printf("MINE\n");
    printf("THIS IS MY STRING: %s \n", str);
    printf("ORIGINAL DEST STRING %s \n", dst);
    change = ft_strlcpy(dst, str, n);
    printf("RETURN %zu \n", change);
    printf("FINAL DEST STRING %s \n", dst);
    printf("After DEST STRING: %c \n", dst[6]);
    printf("After DEST STRING: %c \n", dst[7]);
    printf("After DEST STRING: %c \n", dst[8]);
    printf("After DEST STRING: %c \n", dst[9]);
    printf("-----------------------------------------\n");
    printf("ORIGINAL\n");
    printf("THIS IS MY STRING: %s \n", str1);
    printf("ORIGINAL DEST STRING: %s \n", dst1);
    length = strlcpy(dst1, str1, n);
    printf("THIS RETURN: %zu \n", length);
    printf("FINAL DEST STRING: %s \n", dst1);
    printf("After DEST STRING: %c \n", dst1[6]);
    printf("After DEST STRING: %c \n", dst1[7]);
    printf("After DEST STRING: %c \n", dst1[8]);
    printf("After DEST STRING: %c \n", dst1[9]);
    return (0);
}
*/
