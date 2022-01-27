char	*p;
char	s;

s = 1;
p = malloc(i)
if (n < 0)


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
	char	*p;
	int		aux;
	char = len;

	aux = n;
	len = ft_intlen(int n);
	if (!(p = malloc(sizeof(char *) len)))
		return (NULL);
	if (n < 0)
	{
		*p = '-';
		aux = aux * -1;
	}
	p[len--] = '\0';
	while (aux)
	{
		p[len--] = aux % 10 + '0';
		aux = aux/10;
	}
	return (str);
}

char	ft_intlen(int n)
{
	int		aux;
	char	len;

	aux = n;
	if (n <= 0)
	// es == 0 tambinén contando con que quiera escribir el 0
		len++;
	while (aux)
	{
		aux = aux/10;
		len++;
	}
	return (len);
}

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
	int		index;

	if (!s || !f)
		return (NULL);
	if (!(p = malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
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
	int	i;

	i = 0;
	if (!s || !f)
		break;
	while (s[i])
	{
		s[i] = f(i, s[i]);
		i++;
	}
}

f(index, &(s[index]));
++index
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
