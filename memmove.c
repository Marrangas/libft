/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:06:58 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 15:44:33 by jmorras-         ###   ########.fr       */
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
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*((char *)(dst + i)) != '\0')
	{
		if ((src + i) == dst || (src + i) == dst + n - 1)
		{	
			while (n > 0)
			{
				n--;
				*((char *)(dst + n)) = *((char *)(src + n));
			}
			return (dst);
		}
		i++;
	}
	return (ft_memcpy(dst, src, n));
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[]= "01234567890";
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
	printf("Mi resultado %s \n", ft_memmove(dst, src, n));
	printf("Resultado original %s \n", memmove(dst1, src1, n));
	return (0);
}
*/
