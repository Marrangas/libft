#include "libft.h"

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}


char	**ft_split(char const *s, char c)
{
	char	**p;
	int 	i[3];

	if (!s)
		return (NULL);
	p = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!p)
		return (0);
	i[0] = 0;
	i[2] = 0;
	i[1] = -1;
	while (i[0] <= (int)ft_strlen(s))
	{
		if (s[i[0]] != c && i[1] < 0)
			i[1] = i[0];
		else if ((s[i[0]] == c || i[0] == (int)ft_strlen(s)) && i[1] >= 0)
		{
			p[i[2]++] = ft_lettercount(s, i[1], i[0]);
			i[1] = -1;
		}
		i[0]++;
	}
	p[i[2]] = 0;
	return (p);
}