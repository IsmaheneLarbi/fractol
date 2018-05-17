/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:40:24 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/08 17:21:21 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	if (*s == '\0' && c != '\0')
		return (NULL);
	if (!*s && c == '\0')
		return ((char *)s);
	if (*s != '\0' && (ptr = ft_strrchr(s + 1, c)))
		return (ptr);
	if (*s == c)
		return ((char*)s);
	return (NULL);
}
