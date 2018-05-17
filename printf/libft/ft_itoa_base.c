/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 23:21:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 21:00:32 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int number, int base)
{
	int		size;
	char	*result;
	int		i;
	int		rest;
	int		flag;

	i = 0;
	size = ft_nbrsize(number, base);
	if (base == 10 && number == INT_MIN)
		return ((result = ft_strdup("-2147483648")));
	if (base == 10 && number < 0 && (flag = 1))
		number *= (-1);
	if (!(result = ft_strnew(size)))
		return (NULL);
	((flag) ? (result[0] = '-') : 0);
	((number == 0) ? result[0] = '0' : 0);
	while (number != 0 && i <= size)
	{
		rest = number % base;
		((rest > 9) ? (result[--size] = (rest - 10) + 'A') :
		(result[--size] = rest + '0'));
		number = number / base;
	}
	return (result);
}
