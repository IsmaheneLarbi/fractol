/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrtostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 19:47:36 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 21:24:39 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_wstrtostr(void *str, t_format *f, int *size)
{
	char *s;

	s = NULL;
	((!f) ? exit(-1) : 0);
	if (!str)
	{
		(*size = ((f->width) ? (f->width->max) : ft_strlen("(null)")));
		return ((s = ft_strdup("(null)")));
	}
	if ((f->len && f->len->l) || (*(f->type) == 'S'))
	{
		s = ft_wstr((wchar_t *)str, f, size);
		*size = ((s && f->width && f->width->max >= 0
				&& f->width->max < (int)ft_strlen(s))
				? ft_wstrbytes((wchar_t *)str, f->width->max) : ft_strlen(s));
	}
	if (!(f->len) && (*(f->type) == 's'))
	{
		s = ft_strnew(ft_strlen((char *)str));
		ft_strcpy(s, str);
		*size = ((s && f->width && f->width->max >= 0
				&& ((int)ft_strlen(s) > f->width->max))
				? f->width->max : ft_strlen(s));
	}
	return (s);
}
