/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:19:44 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/26 13:30:53 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char			*p;
	char			*res;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	p = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	res = p;
	if (!p)
		return (NULL);
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p++ = '\0';
	return (res);
}