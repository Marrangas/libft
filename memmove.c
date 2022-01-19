/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:06:58 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/19 17:18:37 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  i;

    i = 0;
	while (*((int *)(dst + i)) != '\0')
	{
        if ((src + i) ==dst)
            return (0);
        i++;
    

    while (i < n)
    {
        *((char *)(dst +i)) = *((char *)(src + i));
        i++;
    }
    return (dst);
}

#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	char non-destructive;
	non-destructuve = 0;
	while i < len
		if *src + i == *dst || *src + i == dst + len -1
			non-destructive = 1;
		else
			non-destructive
				https://stackoverflow.com/questions/4023320/how-to-implement-memmove-in-standard-c-without-an-intermediate-copy
	return (dst);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char dst[]= "\"Donde estara mi carro\"";
	char dst1[]= "Cosas de la vida";
	char src[]= "Como deccia Rafael: ";
	char src1[]= "pacas";
	printf("La cadena de origen %s \n", src1);
	printf("La cadena de destino %s \n", dst1);
	//printf("Resultado %s \n",ft_memmove(dst, src, 5));
	printf("Resultado Orginal %s \n",memmove(dst1, src1, 5));
	return (0);
}
