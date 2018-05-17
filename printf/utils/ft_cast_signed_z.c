/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_signed_z.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 19:32:33 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:25:31 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_signed_z(intmax_t result)
{
	ssize_t		z;
	char		*number;

	z = (ssize_t)result;
	number = ft_itoa_max_base(z, 10);
	return (number);
}
