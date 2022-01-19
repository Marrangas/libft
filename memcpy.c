/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmcpy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:19:29 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/19 17:17:15 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(dst + i)) = *((char *)(src + i));
		i++;
	}
	return (dst;
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[]="01234567890";
	char s1[]="01234567890";
	char *src;
	char *src1;
	char *dst;
	char *dst1;
	size_t n;

	n = 4;
	src = &s[3];
	dst = &s[5];
	src1= &s1[3];
	dst1 = &s1[5];
	printf("Mi resultado %s \n", ft_memcpy(dst, src, n));
	printf("Resultado original %s \n", memcpy(dst1, src1, n));
	return (0);
}
*/
