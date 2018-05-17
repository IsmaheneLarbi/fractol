/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 14:32:36 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/13 14:58:08 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	size_t	j;
	char	*tocopy;
	char	*copiedto;

	i = 0;
	j = 0;
	tocopy = (char *)src;
	copiedto = (char *)dst;
	while (i < n)
	{
		if (tocopy[i] == c)
		{
			copiedto[i] = tocopy[i];
			i++;
			return ((char *)&copiedto[i]);
		}
		copiedto[j] = tocopy[i];
		i++;
		j++;
	}
	return (NULL);
}
