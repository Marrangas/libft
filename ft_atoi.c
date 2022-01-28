/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:58:41 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:00:03 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long int	n;

	n = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{		
		if (*str == '-')
			sign = sign * (-1);
		if (*(str + 1) == '-' || *(str + 1) == '+' )
			return (0);
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
		n = n * 10 + *str++ - 48;
	if (n > 9223372036854775807 && sign < 0)
		return (0);
	else if (n > 9223372036854775807 && sign > 0)
		return (-1);
	return ((int) n * sign);
}
