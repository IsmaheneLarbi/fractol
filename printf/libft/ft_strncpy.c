/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:41:27 by ilarbi            #+#    #+#             */
/*   Updated: 2017/04/25 21:28:20 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	j;

	j = 0;
	if (len == 0)
		return (dst);
	while (ft_strlen(src) >= len && j < len)
	{
		dst[j] = src[j];
		j++;
	}
	if (ft_strlen(src) < len)
	{
		while (src[j])
		{
			dst[j] = src[j];
			j++;
		}
		while (j < len)
		{
			dst[j] = '\0';
			j++;
		}
	}
	return (dst);
}
