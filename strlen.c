/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:15:13 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/18 16:17:06 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen(char *s)
{
	unsigned long int	i;

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
