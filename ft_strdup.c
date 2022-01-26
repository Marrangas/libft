/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:08:51 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/26 20:07:04 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*p;

	p = malloc (ft_strlen(s1)+1);
	if (!p)
		return (NULL);
	return ((char *) ft_memcpy(p, s1, ft_strlen(s1) + 1));
}
