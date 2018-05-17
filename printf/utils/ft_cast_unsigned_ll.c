/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_unsigned_ll.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 15:34:09 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:24:02 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_unsigned_ll(uintmax_t result, int base)
{
	unsigned long long	ull;
	char				*number;

	ull = (unsigned long long)result;
	number = ft_uitoa_max_base(ull, base);
	return (number);
}
