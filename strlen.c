/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:15:13 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 17:20:36 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t	ft_strlen(const <char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
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
