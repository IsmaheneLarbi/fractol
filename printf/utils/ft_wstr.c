/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:54:16 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/03 11:57:06 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_freewc(char **wc)
{
	int		i;

	i = 0;
	while (wc && wc[i])
		free(wc[i++]);
	if (wc)
		free(wc);
}

char	*ft_wstr(wchar_t *ws, t_format *f, int *size)
{
	char	*str;
	char	*clrstr;
	char	*(*fptr)(wchar_t, t_format *, int *);
	wchar_t	*cur;

	if (!(str = ft_strnew(0)))
		exit(-1);
	cur = ws;
	fptr = &ft_chartostr;
	if (!ws)
		exit(-1);
	while (*cur)
	{
		clrstr = str;
		str = ft_strjoin_free(str, 1, (fptr)(*cur, f, size), 1);
		if (str == NULL && clrstr)
			free(clrstr);
		cur++;
	}
	return (str);
}
