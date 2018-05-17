/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_unsigned_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 15:23:08 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:24:31 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_unsigned_l(uintmax_t result, int base)
{
	unsigned long	ul;
	char			*number;

	ul = (unsigned long)result;
	number = ft_uitoa_max_base(ul, base);
	return (number);
}
