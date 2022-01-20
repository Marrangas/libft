/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:46:29 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 17:43:06 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = 0;
	while ((src[i] != '\0') && ((dst_len + i) < (dstsize - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return ((dst_len + ft_strlen(src)));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned int n = 30;
    char src1[] = "0123456789";
    char dst1[] = "abcdefghijklmnopqrstuvwxyz";
    char src[] = "0123456789";
    char dst[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Origen: %s \n", src);
    printf("Destino: %s \n", dst);
    printf("---------------------------: \n");
	printf("Ft Original: %zu \n", strlcat(dst1, src1, n));
	printf("Origen: %s \n", src1);
	printf("Destino: %s \n", dst1);
	printf("---------------------------: \n");
    printf("Mi función: %zu \n", ft_strlcat(dst, src, n));
    printf("Origen: %s \n", src);
    printf("Destino: %s \n", dst);
    printf("---------------------------: \n");
    return (0);
}
*/
