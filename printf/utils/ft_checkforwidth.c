/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkforwidth.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 23:21:07 by ilarbi            #+#    #+#             */
/*   Updated: 2017/07/20 15:26:07 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"

/*
**if width < var len => ignore written += var len
**else written += width
**start printing according to flags : spaces, signs...
*/

void	ft_checkforwidth(const char **format, t_format **f)
{
	if (!*format || !*f)
		return ;
	if (!*(*format) || !ft_iswidth(*(*format)))
	{
		(*f)->width = NULL;
		return ;
	}
	if (!((*f)->width = (t_width *)ft_memalloc(sizeof(t_width))))
		return ;
	(*f)->width->max = -1;
	while (*(*format) && ft_iswidth(*(*format)))
	{
		if (*(*format) == '.' && (*format)++)
			(*f)->width->precision = 1;
		else
			(((*f)->width->precision) ?
			((*f)->width->max = ft_atoistr(format)) :
			((*f)->width->min = ft_atoistr(format)));
	}
}
