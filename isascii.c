/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:41:27 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 17:52:24 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
    if (c >= 0 && c <= '~' + 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
    printf("%i", ft_isascii('a'));
    return (0);
}
*/
