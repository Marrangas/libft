/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:00:35 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:00:35 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*
ft_putstr_fd
Prototype
void ft_putstr_fd(char *s, int fd);
Turn in files
-
Parameters
s:  The string to output.
fd:  The file descriptor on which to write.
Return value
None
External functs.
write
Description
Outputs the string ’s’ to the given file
descriptor.
*/
