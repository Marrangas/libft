/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:35:14 by jmorras-          #+#    #+#             */
/*   Updated: 2022/02/03 16:52:40 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > '/' && c < ':') || (c > '@' && c < '[') || (c > '`' && c < '{'))
		return (1);
	return (0);
}
