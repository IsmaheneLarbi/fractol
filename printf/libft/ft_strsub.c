/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 11:55:07 by ilarbi            #+#    #+#             */
/*   Updated: 2017/04/09 22:21:09 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	j;
	char	*fresh;

	i = start;
	if (s)
	{
		size = ft_strlen(s);
		j = 0;
		fresh = (char *)malloc(sizeof(char) * (len + 1));
		if (fresh == NULL)
			return (NULL);
		if (size == 0 || len == 0)
		{
			*fresh = '\0';
			return (fresh);
		}
		while (j < len && i < start + len)
			fresh[j++] = s[i++];
		fresh[len] = 0;
	}
	return ((s) ? fresh : NULL);
}
