/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 15:05:08 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 16:47:00 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_cast_unsigned(void *res, t_format *f, int *size)
{
	char	*number;

	if (!f || !(f->type) || !size)
		return (NULL);
	if ((f->len && f->len->l) || *(f->type) == 'O' || *(f->type) == 'U')
		number = ft_cast_unsigned_l((unsigned long)res, ft_assign_base(f));
	else if (!(f->len))
		number = ft_cast_unsigned_((unsigned)res, ft_assign_base(f));
	else if ((f->len->hh) || (f->len->h))
		number = (f->len->hh) ? ft_cast_unsigned_hh((unsigned)res,
	ft_assign_base(f)) : ft_cast_unsigned_h((unsigned)res, ft_assign_base(f));
	else if (f->len->ll || f->len->j)
		number = (f->len->ll) ? ft_cast_unsigned_ll((unsigned long long)res,
	ft_assign_base(f))
	: ft_cast_unsigned_j((uintmax_t)res, ft_assign_base(f));
	else if (f->len->z)
		number = ft_cast_unsigned_z((unsigned long long)res,
		ft_assign_base(f));
	if (!res && f->width
		&& (!(f->width->max) || (f->width->precision && f->width->max == -1)))
		*size = ((ft_tolower(*(f->type)) == 'o' && f->flags && f->flags->hash)
				? (1) : (0));
	else
		*size = ft_strlen(number);
	return ((*(f->type) == 'x') ? ft_strminimalize(&number) : number);
}
