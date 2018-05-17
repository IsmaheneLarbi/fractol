/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padandprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 14:22:07 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/03 11:19:19 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_fldsize(t_format *f, int size)
{
	int		fldsize;

	if (!f)
		return (-1);
	fldsize = size;
	if (f->width && f->width->max >= 0)
	{
		fldsize = ((f->width->max > size && (ft_isnumeric(*(f->type))
			|| (*(f->type) == 'p'))) ? f->width->max : size);
		if (*(f->type) == 'o' && f->flags &&
			f->flags->hash && f->width->min > size)
			((fldsize > size) ? fldsize : fldsize++);
	}
	return (fldsize);
}

int		ft_pad(char *str, t_format *f, int size, int fldsize)
{
	int		pad;

	if (!f)
		return (0);
	pad = 0;
	if (f->width && f->width->min > fldsize)
	{
		pad = f->width->min - fldsize;
		if (size > f->width->max)
		{
			if (ft_tolower(*(f->type)) == 'o' && f->flags
				&& f->flags->hash)
				pad -= 1;
		}
		if ((ft_tolower(*(f->type)) == 'x' && f->flags
				&& f->flags->hash && *str != '0') || (*(f->type) == 'p'))
			pad -= 2;
		if (ft_isnumeric(*(f->type)) && (*str == '-'
			|| (f->flags && (f->flags->space || f->flags->plus))))
			pad -= 1;
	}
	return ((pad > 0) ? pad : 0);
}

void	ft_printsign(char **str, t_format **f, int *written)
{
	char sign;

	sign = '\0';
	if (!*str || !*f || !written || !((*f)->type))
		return ;
	if (ft_issigned(*((*f)->type)) && (*(*str) == '-' || ((*f)->flags
				&& ((*f)->flags->plus || (*f)->flags->space))))
	{
		((*(*str) == '-') ? (sign = '-') : 0);
		if ((*f)->flags && !sign
			&& ((*f)->flags->plus || (*f)->flags->space))
			sign = (((*f)->flags->plus) ? '+' : ' ');
		ft_prepend(sign, 1, written);
	}
}

t_pad	*ft_initpad(char **str, t_format *f, int *written, int *sz)
{
	t_pad	*p;

	if (!f || !written || !sz || !(p = (t_pad *)malloc(sizeof(t_pad))))
		return (NULL);
	p->sz = *sz;
	p->fldsize = ft_fldsize(f, p->sz);
	p->pmin = ft_pad(*str, f, *sz, p->fldsize);
	p->padded = 0;
	p->pad[0] = 'r';
	p->pad[1] = ' ';
	if (f->width && f->width->min > p->fldsize)
	{
		if (f->flags && (f->flags->zero || f->flags->minus))
			((f->flags->minus) ? (p->pad[0] = 'l')
			: (p->pad[1] = '0'));
		if (p->pad[0] == 'r' && p->pad[1] == ' '
			&& !(p->padded) && (p->padded = 1))
			ft_prepend(p->pad[1], p->pmin, written);
	}
	return (p);
}

void	ft_padandprint(char **str, t_format **f, int *written, int *sz)
{
	t_pad	*p;

	if (!(p = ft_initpad(str, *f, written, sz)))
		return ;
	ft_printsign(str, f, written);
	((*((*f)->type) == 'p') ? ft_prepend('x', 2, written) : 0);
	((p->pad[0] == 'r' && p->pad[1] == '0' && ft_tolower(*((*f)->type)) != 'x'
	&& !(p->padded) && (p->padded = 1))
	? ft_prepend(p->pad[1], p->pmin, written) : 0);
	(((*f)->flags && (*f)->flags->hash && *(*str) != '0'
	&& ft_tolower(*((*f)->type)) != 'c')
	? ft_prepend(*((*f)->type), 1, written) : 0);
	if ((ft_isnumeric(*((*f)->type)) || *((*f)->type) == 'p')
	&& (p->fldsize > *sz || ((*f)->flags && (*f)->flags->zero && p->pmin
	&& !(p->padded) && (p->padded = 1))))
		((p->fldsize > *sz) ? (ft_prepend('0', p->fldsize - *sz, written))
		: (ft_prepend('0', p->pmin, written)));
	((ft_issigned(*((*f)->type)) && *(*str) == '-' && *sz)
	? write(1, *str + 1, *sz) : write(1, *str, *sz));
	*written += *sz;
	(((*f)->width && (*f)->width->min > p->fldsize
	&& p->pad[0] == 'l' && !(p->padded) && (p->padded = 1))
	? ft_prepend(p->pad[1], p->pmin, written) : 0);
	free(p);
}
