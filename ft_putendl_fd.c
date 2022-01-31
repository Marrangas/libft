/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putebdk_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:00:16 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:00:16 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}

/*
ft_putendl_fd
Prototype
void ft_putendl_fd(char *s, int fd);
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
Outputs the string ’s’ to the given file descriptor
followed by a newline.
*/
