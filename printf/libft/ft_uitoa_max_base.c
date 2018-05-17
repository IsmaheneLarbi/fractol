/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_max_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 23:21:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:44:34 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

char	*ft_uitoa_max_base(uintmax_t number, int base)
{
	int		size;
	char	*result;
	int		i;
	int		rest;

	i = 0;
	size = ft_nbrusize(number, base);
	if (!(result = ft_strnew(size)))
		return (NULL);
	result[size] = '\0';
	if (number == 0)
		result[0] = '0';
	while (number != 0 && i <= size)
	{
		rest = number % base;
		((rest > 9) ? (result[--size] = (rest - 10) + 'A') :
		(result[--size] = rest + '0'));
		number = number / base;
	}
	return (result);
}
