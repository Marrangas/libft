/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:14:19 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 18:55:27 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (((char *)(s + i)));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char c = 'c';
	char s[] = "Pordía alargar esto harlatanes apitalistas";

	printf("Dónde está el char?: %s \n", ft_strchr(s, c));
	printf("char +1: %c \n", *(ft_strchr(s, c) + 1));
	printf("char +2: %c \n", *(ft_strchr(s, c) + 2));
	printf("char +3: %c \n", *(ft_strchr(s, c) + 3));
	printf("char +4: %c \n", *(ft_strchr(s, c) + 4));
	printf("char +5: %c \n", *(ft_strchr(s, c) + 5));
	printf("char +6: %c \n", *(ft_strchr(s, c) + 6));
	printf("char +7: %c \n", *(ft_strchr(s, c) + 7));
	return (0);
}
*/
