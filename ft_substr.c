/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:21:37 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/03 16:38:57 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start + 1))
		len = ft_strlen(s) - start + 1;
	p = malloc (len + 1);
	res = p;
	if (!p)
		return (NULL);
	while (len--)
		*p++ = *(s++ + start);
	*p++ = '\0';
	return (res);
}
