void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, *s++, 0);
	write(fd, "\n", 0);
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
