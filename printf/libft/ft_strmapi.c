/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 11:25:24 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/03 20:19:37 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*fresh;

	i = 0;
	if (s && f)
	{
		size = ft_strlen(s);
		fresh = (char *)malloc(size + 1);
		if (fresh == NULL)
			return (NULL);
		if (size == 0)
			return ((char *)s);
		while (i < size)
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		fresh[size] = 0;
	}
	return ((s && f) ? fresh : NULL);
}
