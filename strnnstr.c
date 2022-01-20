/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnnstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:06:14 by jmorras-          #+#    #+#             */
/*   Updated: 2022/01/20 19:14:18 by jmorras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	
}

#include <stdio.h>
#include <string.h>
int main ()
{
	printf ("", );
	return (0);
}
char	*ft_invoc_strstr(char *str, char *to_find, int	i, int j)
{
	int	found;

	found = 0;
	if (str == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			found = i;
			while (to_find[j] == str[i])
			{
				if (to_find[j + 1] == '\0' )
					return (&str[found]);
				j++;
				i++;
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	str = ft_invoc_strstr(str, to_find, i, j);
	return (str);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char sO1[256] = "mememememem met met abc para parámetro para";
	char sO2[256] =  "";

	printf("Original\t Dest: %s \t Source: %s \t Result: %s \n",
 sO1, sO2, strstr(sO1, sO2));
	printf("La mia \t\t Dest: %s \t Source: %s \t Result: %s \n",
 sO1, sO2, ft_strstr(sO1, sO2));
}
