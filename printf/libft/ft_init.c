/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 17:23:35 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/13 17:23:39 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_init(void **somethg, size_t size)
{
	unsigned char **s;

	s = (unsigned char **)somethg;
	if (somethg && *somethg)
	{
		if (!(*s = (unsigned char *)malloc(size)))
			exit(1);
		ft_memset(*s, 0, size);
	}
}
