/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:44:03 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/09 17:16:59 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		ft_wordcount(char *string, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!string || !*string)
		return (0);
	while (string[i] && c != 0)
	{
		if ((string[i] != c) && (string[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_readline(char **reader, char c)
{
	size_t	j;
	char	*str;

	j = 0;
	str = NULL;
	if (reader && *reader)
	{
		while (*(*reader) && *(*reader) == c)
			(*reader)++;
		while (*(*reader) && *(*reader) != c)
		{
			j++;
			(*reader)++;
		}
		if (j)
		{
			str = (char *)malloc(sizeof(char) * (j + 1));
			str = ft_memcpy(str, (*reader - j), j);
			str[j] = '\0';
		}
	}
	return (str);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*reader;
	char	**words;

	i = 0;
	j = 0;
	words = NULL;
	if (s && *s)
	{
		reader = (char *)s;
		count = ft_wordcount(reader, c);
		if (!(words = (char **)malloc(sizeof(char *) * (count + 1))))
			return (NULL);
		words[count] = 0;
		while (*reader && i < count)
		{
			words[i] = ft_readline(&reader, c);
			i++;
		}
	}
	return ((s) ? words : NULL);
}
