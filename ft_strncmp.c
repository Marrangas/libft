/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:58:43 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/25 13:05:19 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;

	i = 0;
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		while ((v1[i] != '\0' || v2[i] != '\0') && i < n)
		{
			if (v1[i] != v2[i])
				return (v1[i] - v2[i]);
			i++;
		}
	}
	return (0);
}
