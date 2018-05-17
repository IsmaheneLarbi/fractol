/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 18:22:06 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 20:21:37 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_bin_to_dec(char *bin)
{
	int				i;
	int				size;
	unsigned int	result;

	if (!bin)
		exit(-1);
	i = 0;
	size = ft_strlen(bin) - 1;
	result = 0;
	while (i <= size)
	{
		result += ((bin[size - i] - 48) * ft_power(2, i));
		i++;
	}
	return (result);
}
