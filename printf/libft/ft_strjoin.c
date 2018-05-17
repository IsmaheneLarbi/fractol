/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 12:27:15 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/09 16:34:19 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;

	if (s1 && s2)
	{
		fresh = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
					ft_strlen(s2) + 1));
		if (fresh == NULL)
			return (NULL);
		ft_bzero(fresh, ft_strlen(s1) + ft_strlen(s2) + 1);
		ft_strcat(fresh, s1);
		ft_strcat(fresh, s2);
	}
	return ((s1 && s2) ? fresh : NULL);
}
