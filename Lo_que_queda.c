char	**ft_split(char const *s, char c);
{

}
/*
Function name
		ft_split
Prototype
char **ft_split(char const *s, char c);
Turn in files
-
Parameters
s:  The string to be split.
c:  The delimiter character.
Return value
The array of new strings resulting from the split.
NULL if the allocation fails.
External functs.
malloc, free
Description
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.
*/

char	*ft_itoa(int n)
{
	char	*str;
	while (n)
	{
		str++ = n % 10 + '0';
		n = n/10
	}
	return (str);
}

/*
Function name
		ft_itoa
Prototype
char *ft_itoa(int n);
Turn in files
-
Parameters
n:  the integer to convert.
Return value
The string representing the integer.
NULL if the allocation fails.
External functs.
malloc
Description
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;

	if (!(p = malloc(de cosas))
		return (NULL);
	return (p);
}
/*
ft_strmapi
Prototype
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Turn in files
-
Parameters
s:  The string on which to iterate.
f:  The function to apply to each character.
Return value
The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External functs.
malloc
Description
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{

}
/*
Function name
ft_striteri
Prototype
void ft_striteri(char *s, void (*f)(unsigned int, char*));
Turn in files
-
Parameters
s:  The string on which to iterate.
f:  The function to apply to each character.
Return value
None
External functs.
None
Description
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument.  Each character is passed by
address to ’f’ to be modified if necessary.

*/

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

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)	
		write(fd, *s++, 1);
	write(fd, "\n", 1);
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

/*
PARA LA LIB
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd)
void	ft_putnbr_fd(int n, int fd);

PARA EL MAKE
ft_split.c		
ft_itoa.c		
ft_strmapi.c	
ft_striteri.c	
ft_putchar_fd.c	
ft_putstr_fd.c	
ft_putendl_fd.c	
ft_putnbr_fd.c	
*/