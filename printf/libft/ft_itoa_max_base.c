/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_max_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 23:21:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:42:48 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_max_base(intmax_t number, int base)
{
	int		size;
	char	*result;
	int		i;
	int		rest;
	int		flag;

	i = 0;
	if (base == 10 && number == INTMAX_MIN)
		return (ft_strdup("-9223372036854775808"));
	size = ft_nbrssize(number, base);
	if (base == 10 && number < 0 && (flag = 1))
		number *= (-1);
	if (!(result = ft_strnew(size)))
		return (NULL);
	((flag) ? (result[0] = '-') : 0);
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
