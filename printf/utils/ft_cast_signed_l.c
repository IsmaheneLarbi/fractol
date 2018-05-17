/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_signed_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 17:41:48 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:27:22 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_signed_l(intmax_t result)
{
	long	l;
	char	*number;

	l = (long)result;
	number = ft_itoa_max_base(l, 10);
	return (number);
}
