/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_unsigned_z.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 15:36:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/06/20 13:16:46 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_unsigned_z(uintmax_t result, int base)
{
	size_t	zu;
	char	*number;

	if (result > SIZE_MAX)
		return (NULL);
	zu = (size_t)result;
	number = ft_uitoa_max_base(zu, base);
	return (number);
}
