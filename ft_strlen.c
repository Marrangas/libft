/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:15:13 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/21 15:35:25 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	if (!s)
		return (len);
	while (s[len])
		len++;
	return (len);
}	
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char* c = "";

	printf("Mine \t\t %lu \n", ft_strlen(c));
	printf("Original\t %lu \n", strlen(c));
	return (0);
}
*/
