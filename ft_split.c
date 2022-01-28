/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:00:40 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/28 15:25:19 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	n_str;

	i = 0;
	n_str = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			n_str++;
		i++;
	}
	return (n_str);
}
char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	sub_p;
	size_t	last;
	size_t	n_str;

	if (!s)
		return ((char **)ft_strdup(""));
	n_str = ft_wordcount(s, c);
	p = malloc (sizeof(char *) * (n_str));
	if (!p)
		return (NULL);
	i = 0;
	last = 0;
	sub_p = 0;
	while (sub_p < n_str)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			if (!(p[sub_p++] = malloc (ft_strlen(ft_substr(s, last, (i - last))))))
				return (NULL);
			while (s[i + 1] == c)
				last = ++i +1;
		}
		i++;
	}
	return (p);
}


	//if (&ft_strchr(s[i], c) == &s[i])


/*	
	
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
		return ((char *)s1); // new complete string 
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
strsubstr

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
*/