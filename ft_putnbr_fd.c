void	ft_putnbr_fd(int n, int fd)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

/*
ft_putnbr_fd
Prototype
void ft_putnbr_fd(int n, int fd);
Turn in files
-
Parameters
n:  The integer to output.
fd:  The file descriptor on which to write.
Return value
None
External functs.
write
Description
Outputs the integer ’n’ to the given file
descriptor.
*/
