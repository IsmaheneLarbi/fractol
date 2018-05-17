/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_signed_ll.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 19:32:33 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:26:07 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_signed_ll(intmax_t result)
{
	long long	ll;
	char		*number;

	ll = (long long)result;
	number = ft_itoa_max_base(ll, 10);
	return (number);
}
