/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkforflags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 17:16:42 by ilarbi            #+#    #+#             */
/*   Updated: 2017/06/24 14:16:20 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_checkforflags(const char **format, t_format **f)
{
	if (!format || !*format)
		exit(-1);
	if (!*(*format) || !ft_isflag(*(*format)))
	{
		(*f)->flags = NULL;
		return ;
	}
	if (!((*f)->flags = (t_flags *)ft_memalloc(sizeof(t_flags))))
		exit(-1);
	while (*(*format) && ft_isflag(*(*format)))
	{
		if (*(*format) == '0')
			(*f)->flags->zero = 1;
		if (*(*format) == '-')
			(*f)->flags->minus = 1;
		if (*(*format) == '+')
			(*f)->flags->plus = 1;
		if (*(*format) == '#')
			(*f)->flags->hash = 1;
		if (*(*format) == ' ')
			(*f)->flags->space = 1;
		(*format)++;
	}
}
