/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrssize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 17:09:10 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:43:41 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrssize(intmax_t number, int base)
{
	int	size;

	size = 0;
	if (number == 0)
		return (++size);
	if (number < 0 && (size += 1))
		number = -number;
	while (number > 0)
	{
		size++;
		number /= base;
	}
	return (size);
}
