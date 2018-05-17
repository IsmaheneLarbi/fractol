/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_signed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 16:09:48 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:43:01 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_signed(void *result, t_format *f, int *size)
{
	char	*number;

	number = NULL;
	if ((f->len && f->len->l) || *(f->type) == 'D' || *(f->type) == 'I')
		number = ft_cast_signed_l((long)result);
	else if (!f->len)
		number = ft_cast_signed_((int)result);
	else if (f->len->hh)
		number = ft_cast_signed_hh((int)result);
	else if (f->len->h)
		number = ft_cast_signed_h((int)result);
	else if (f->len->ll)
		number = ft_cast_signed_ll((long long)result);
	else if (f->len->j)
		number = ft_cast_signed_j((intmax_t)result);
	else if (f->len->z)
		number = ft_cast_signed_z((long long)result);
	if (!result && f->width && ((!f->width->max) ||
				(f->width->precision && f->width->max == -1)))
		*size = 0;
	else
		*size = ((*number == '-') ? (ft_strlen(number) - 1)
				: (ft_strlen(number)));
	return (number);
}
