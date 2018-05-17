/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:25:55 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/03 12:01:46 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_chartostr(int result, t_format *f, int *size)
{
	char	*c;

	c = NULL;
	if (MB_CUR_MAX == 1 && (result < 0 || result > 255))
		return (NULL);
	if (!f || !size)
		return (NULL);
	if ((f->len || *(f->type) == 'C' || *(f->type) == 'S')
		&& (result < INT_MIN || result > INT_MAX))
		return (NULL);
	if (result > 127 && (f->len || *(f->type) == 'C' || *(f->type) == 'S'))
	{
		c = ft_wc(ft_wchart(result));
		*size = ft_wcsize(result);
	}
	else
	{
		c = ft_strnew(1);
		*c = (unsigned char)result;
		*size = 1;
	}
	return (c);
}
