/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:06:58 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/25 12:49:25 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((char *)dst > (char *)src)
	{
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	}
	else if ((char *)dst < (char *)src)
		ft_memcpy(dst, src, len);
	return (dst);
}
