/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:52:17 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/03 16:52:05 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	len;

	len = ft_intlen(n);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	p[len--] = '\0';
	if (n == 0)
		p[len--] = '0';
	if (n < 0)
	{
		p[len--] = ((n % 10) * (-1)) + '0';
		n = n / 10;
		*p = '-';
		n = n * -1;
	}
	while (n)
	{
		p[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (p);
}
