/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 18:00:19 by ilarbi            #+#    #+#             */
/*   Updated: 2017/06/20 14:32:27 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_assign_base(t_format *f)
{
	if (!f || !(f->type))
		return (-1);
	if (ft_tolower(*(f->type)) == 'o')
		return (8);
	if (ft_tolower(*(f->type)) == 'x')
		return (16);
	return (10);
}
