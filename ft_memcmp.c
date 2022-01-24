/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:09:44 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/24 18:42:49 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;

	i = 0;
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (/* (v1[i] != '\0') && (v2[i] != '\0') && ()*/ i < n)
	{
		if (v1[i] != v2[i])
			return (v1[i] - v2[i]);
		i++;
	}
	return (0);
}