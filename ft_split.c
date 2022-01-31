/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <jmorras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:24:52 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/31 14:31:42 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	size_t	i;
	size_t	n_str;

	i = 0;
	n_str = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			n_str++;
		i++;
	}
	return (n_str);
}

static char	*ft_lettercount(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_wordfree(char **str, int i)
{
	while (i > 0)
		free(str[i--]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i[3];

	if (!s)
		return (NULL);
	p = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!p)
		return (0);
	i[0] = -1;
	i[2] = 0;
	i[1] = -1;
	while (++i[0] <= (int)ft_strlen(s))
	{
		if (s[i[0]] != c && i[1] < 0)
			i[1] = i[0];
		else if ((s[i[0]] == c || i[0] == (int)ft_strlen(s)) && i[1] >= 0)
		{
			p[i[2]] = ft_lettercount(s, i[1], i[0]);
			if (!(p[i[2]++]))
				return (ft_wordfree(p, i[2]));
			i[1] = -1;
		}
	}
	p[i[2]] = 0;
	return (p);
}
