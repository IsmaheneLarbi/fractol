/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 11:21:30 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:22:39 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_check(t_format **f)
{
	if (!*f)
		return (0);
	if (ft_isnumeric(*((*f)->type)) && (*f)->width && (*f)->flags
		&& (((*f)->width->max >= 0 || (*f)->width->precision))
		&& (*f)->flags->zero)
		(*f)->flags->zero = 0;
	if (*((*f)->type) == '%' && (*f)->flags && (*f)->flags->hash)
		(*f)->flags->hash = 0;
	if (ft_isunsigned(*((*f)->type)) && (*f)->flags && (*f)->flags->space)
		(*f)->flags->space = 0;
	if (ft_isunsigned(*((*f)->type)) && (*f)->flags && (*f)->flags->plus)
		(*f)->flags->plus = 0;
	if ((*f)->width && (*f)->width->precision && ((*f)->width->max == -1)
		&& (ft_tolower(*((*f)->type)) == 's' || (*((*f)->type) == 'p')))
		(*f)->width->max = 0;
	if ((*f)->flags)
	{
		(((*f)->flags->plus && (*f)->flags->space) ?
		(*f)->flags->space = 0 : 0);
		(((*f)->flags->minus && (*f)->flags->zero) ? (*f)->flags->zero = 0 : 0);
	}
	return (1);
}
