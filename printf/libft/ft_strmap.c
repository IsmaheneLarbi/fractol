/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 12:55:10 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 13:37:57 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	size_t	size;
	char	*fresh;

	i = 0;
	if (s && f)
	{
		size = ft_strlen(s);
		fresh = (char *)malloc(size + 1);
		if (size == 0)
			return ((char *)s);
		if (fresh == NULL)
			return (NULL);
		while (s && f && i < size)
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[size] = 0;
	}
	return ((s && f) ? fresh : NULL);
}
