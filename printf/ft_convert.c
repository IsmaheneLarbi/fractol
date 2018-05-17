/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:48:04 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/03 11:44:45 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**enlever if (!f) et faire appel a pad
*/

int		ft_convert(const char **format, int *written, va_list ap, char **number)
{
	t_format	*f;
	int			size;

	*number = NULL;
	size = 0;
	f = ft_parse(format, written);
	if (!f)
		return (0);
	if (*(f->type) == '%')
		*number = ft_percent(&f, &size);
	else if (*(f->type) == 'p')
		*number = ft_redirect_p(&f, va_arg(ap, void*), &size);
	else if (ft_issigned(*(f->type)))
		*number = ft_cast_signed((void *)va_arg(ap, intmax_t), f, &size);
	else if (ft_isunsigned(*(f->type)))
		*number = ft_cast_unsigned((void*)va_arg(ap, uintmax_t), f, &size);
	else if (ft_tolower(*(f->type)) == 'c')
		*number = ft_chartostr((int)va_arg(ap, intmax_t), f, &size);
	else if (ft_tolower(*(f->type)) == 's')
		*number = ft_wstrtostr((char *)va_arg(ap, void *), f, &size);
	else
		*number = ft_invalid_type(f->type, &size);
	ft_padandprint(number, &f, written, &size);
	ft_fdel(&f);
	return (1);
}
