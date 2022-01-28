/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:00:08 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:00:08 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
ft_putchar_fd
Prototype
void ft_putchar_fd(char c, int fd);
Turn in files
-
Parameters
c:  The character to output.
fd:  The file descriptor on which to write.
Return value
None
External functs.
write
Description
Outputs the character ’c’ to the given file
descriptor.
*/
