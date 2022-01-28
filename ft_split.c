#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*p;
	char	*found; 	//?
	
	size_t	i;
	size_t	len_sep;	//?
	size_t	len_tot;
	size_t	n;
	
	i = 0;
	n = 0;
	len_sep = ft_strlen(set);
	len_tot = ft_strlen(s1);
	found = ft_strnstr(s1[i], set, len_tot);
	if (!s1)
		return (ft_strdup(""));
	if (!set || !found)
		return ((char *)s1);
//count occur
	while (s1[i] && i < len_tot)
	{
		if (ft_strncmp(s1[i], set, len_sep) == 0 
			&& (i + len_sep) <= len_tot)
		{
			i = i + len_sep;
			n++;
		}
		i++;
	}

//buff_strclean
	if (!(p = malloc(len_tot - (len_sep * n))))
		return (NULL);
	while (s1[i] && i < len_tot)
	{
		while (ft_strncmp(s1[i], set, len_sep) == 0 
			&& (i + len_sep) <= len_tot)
			i = i + len_sep;
		}
		*p++ = s[i]
		i++;
	}
	return (p)
}