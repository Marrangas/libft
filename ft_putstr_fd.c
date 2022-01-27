void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, *s++, 1);
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
