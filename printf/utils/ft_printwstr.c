/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 13:56:29 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:58:39 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_printwstr(wchar_t *wstr, int precision)
{
	int		size;
	int		sbyte;

	size = 0;
	sbyte = 0;
	if (!wstr)
		return (-1);
	while (*wstr)
	{
		sbyte = ft_wcsize(*wstr);
		if ((size + sbyte) <= precision)
		{
			ft_putwchar(*wstr++);
			size += sbyte;
		}
		else
			break ;
	}
	return (size);
}
