/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:04:56 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 18:11:03 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c > '@') && (c < '['))
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
    int c;

    c = 'A';
    printf("la letra original: %c", ft_tolower(c));
    return (0);
}
*/