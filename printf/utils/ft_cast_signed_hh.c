/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_signed_hh.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 16:10:17 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:29:25 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_signed_hh(intmax_t result)
{
	int		hhd;
	char	*number;

	hhd = (signed char)result;
	number = ft_itoa(hhd);
	return (number);
}
