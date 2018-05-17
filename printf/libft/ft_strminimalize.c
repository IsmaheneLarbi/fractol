/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strminimalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 19:33:08 by ilarbi            #+#    #+#             */
/*   Updated: 2017/06/20 14:13:55 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strminimalize(char **str)
{
	int		i;

	i = 0;
	if (!str || !*str)
		return (NULL);
	while (*(*str + i))
	{
		*(*str + i) = ft_tolower(*(*str + i));
		i++;
	}
	return (*str);
}
