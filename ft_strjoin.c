/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:19:44 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/25 22:32:13 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	j;
	char			*p;
	char			*res;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = -1;
	
	p = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	res = p;
	if (!p)
		return (NULL);
	while (*s1)
		*p++ = *s1++;
		i++;
	
	while (s2[++j])
		p[i++] = s2[j];
	p[i] = '\0';
	return (res);
}

/*{
	char	*p;
	char	*res;


	;
	res = p;
	if (!p)
		return (NULL);

	while (s2 != '\0')
		*p++ = *(char *)s2++;
	*p++ = '\0';
	return (res);
}
*/
/*
s1:  The prefix string.
s2:  The suffix string.
Return value
The new string.
NULL if the allocation fails.
External functs.
malloc
Description
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

		return (NULL);
	while (*s1 != '\0')
		*(p++) = *((char *)s1++);
	while (s2[++j])
		p[i++] = s2[j];
	p[i] = '\0';
	


char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	j;
	char			*out_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = -1;
	if (!(out_str = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	while (s1[i])
	{
		out_str[i] = s1[i];
		i++;
	}
	while (s2[++j])
		out_str[i++] = s2[j];
	out_str[i] = '\0';
	return (out_str);
}

*/