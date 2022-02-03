/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:43:16 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/03 16:39:49 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*found;

	i = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			found = ((char *)(s + i));
		i++;
	}
	if ((char) c == 0)
		return ((char *)(s + i));
	return (found);
}
