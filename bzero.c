/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:03:55 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/19 16:22:12 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(s + i)) = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char s[]="la cadena molona de turno";
	char s1[]="la cadena molona de turno";
	
	ft_bzero(s, 4);
	printf("Character 1  %c \n", s[0]);
	printf("Character 2  %c \n", s[1]);
	printf("Character 3  %c \n", s[2]);
	printf("Character 4  %c \n", s[3]);
	printf("Character 5  %c \n", s[4]);
	printf("-----------------------------\n");
	bzero(s1, 4);
	printf("Character 1  %c \n", s1[0]);
	printf("Character 2  %c \n", s1[1]);
	printf("Character 3  %c \n", s1[2]);
	printf("Character 4  %c \n", s1[3]);
	printf("Character 5  %c \n", s1[4]);
	return (0);
}*/
