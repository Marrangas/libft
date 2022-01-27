/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:18:20 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/26 20:19:40 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_ok;

	if (!s1)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len_ok = ft_strlen(s1);
	while (ft_strchr(set, s1[len_ok]) && len_ok > 0)
		len_ok--;
	return (ft_substr(s1, 0, len_ok + 1));
}
/*
Parameters
s1:  The string to be trimmed.
set:  The reference set of characters to trim.

Return value
The trimmed string.
NULL if the allocation fails.

External functs.
malloc

Description
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/