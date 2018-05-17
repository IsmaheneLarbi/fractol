/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 18:10:29 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 22:03:36 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_wcsize(wchar_t letter)
{
	int		bits;
	char	*stupid_mistake;

	stupid_mistake = ft_itoa_base((wint_t)letter, 2);
	bits = ft_strlen(stupid_mistake);
	free(stupid_mistake);
	if (bits <= 7)
		return (1);
	else if (bits <= 11)
		return (2);
	else if (bits <= 16)
		return (3);
	else if (bits <= 21)
		return (4);
	else
		return (-1);
}
