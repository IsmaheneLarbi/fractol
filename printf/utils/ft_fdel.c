/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 14:17:17 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 17:54:59 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_fdel(t_format **f)
{
	if (!(*f))
		return ;
	if ((*f)->flags)
		free((*f)->flags);
	if ((*f)->width)
		free((*f)->width);
	if ((*f)->len)
		free((*f)->len);
	if ((*f)->type)
		free((*f)->type);
	free(*f);
	f = NULL;
}
