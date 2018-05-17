/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrbytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 19:31:33 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:56:06 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int		ft_wstrbytes(wchar_t *wstr, int precision)
{
	int		size;
	int		sbyte;

	if (!wstr)
		return (-1);
	size = 0;
	sbyte = 0;
	while (*wstr)
	{
		sbyte = ft_wcsize(*wstr);
		if ((size + sbyte) <= precision)
			size += sbyte;
		else
			break ;
	}
	return (size);
}
