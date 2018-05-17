/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:56:50 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/13 15:04:38 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_min(size_t src, size_t i)
{
	return ((src < i) ? src : i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	nul;

	i = 0;
	j = 0;
	nul = 0;
	while (dst[i])
		i++;
	if (size == 0)
		return (ft_strlen(src));
	if (src[j] == '\0')
		return ((size < i) ? size : i);
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		((dst[i + j] == '\0') ? nul = 1 : nul);
		j++;
	}
	if (nul == 0)
	{
		dst[i + j] = '\0';
		return (ft_strlen(src) + ft_min(size, i));
	}
	return (i + ft_strlen(src));
}
