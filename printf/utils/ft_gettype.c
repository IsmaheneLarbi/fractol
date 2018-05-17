/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 20:42:20 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 14:03:01 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_gettype(const char **format, t_format **f)
{
	if (!*format || !*f)
	{
		ft_fdel(f);
		exit(0);
	}
	if (*(*format))
	{
		(*f)->type = ft_strnew(1);
		*((*f)->type) = *(*format);
	}
	else
	{
		ft_memdel((void **)f);
		return ;
	}
}
