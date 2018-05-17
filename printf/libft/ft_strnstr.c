/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:40:00 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 13:40:15 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		start;
	char	*ptr;

	start = -1;
	ptr = (char *)big;
	if (!*big)
		return ((!*little) ? (char *)big : NULL);
	while (*ptr)
	{
		j = 0;
		i = ++start;
		while (big[i] && little[j] && (big[i] != little[j]) && i < len)
			i++;
		ptr = (char *)&big[i];
		while (big[i] && little[j] && (big[i] == little[j]) && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return (ptr);
	}
	return (NULL);
}
