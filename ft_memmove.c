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
#include "libft.h"

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